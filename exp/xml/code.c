#include <stdio.h>
#include <stdlib.h>
#include <mxml.h>

void get_node_data(mxml_node_t *node) {
  // Variable declarations.
  mxml_type_t type;
  const char *element_name, *attribute_name, *text, *attribute;
  int i, count;

  // First get type of node.
  if ((type = mxmlGetType(node)) == MXML_IGNORE) {
    printf("Ignore node.\n");
    return;
  }

  switch (type) {
    case MXML_ELEMENT:
      printf("ELEMENT:\n");

      // Get element name.
      if ((element_name = mxmlGetElement(node)) == NULL)
        return;

      printf("Name = %s\n", element_name);

      count = mxmlElementGetAttrCount(node);

      for (i = 0; i < count; i++) {
        if ((attribute = mxmlElementGetAttrByIndex(node, i, &attribute_name)) == NULL) {
          printf("Failed to get attribute.\n");
          return;
        }

        printf("Attribute %d: %s = %s\n", i, attribute_name, attribute);

      }


      break;
    case MXML_CUSTOM:
      printf("CUSTOM:\n");
      break;
    case MXML_INTEGER:
      printf("INTEGER:\n");
      break;
    case MXML_OPAQUE:
      printf("OPAQUE:\n");
      break;
    case MXML_REAL:
      printf("REAL:\n");
      break;
    case MXML_TEXT:
      printf("TEXT:\n");

      if ((text = mxmlGetText(node, NULL)) == NULL) {
        printf("Failed to get text.\n");
        return;
      }

      printf("Text = %s\n", text);
      break;
    default:
      printf("Invalid type.\n");
  }

  return;

}

void traverse_tree(mxml_node_t *root) {
  // Variable declarations.
  mxml_node_t *node;
  
  // Print out info for given node.
  get_node_data(root);

  if ((node = mxmlGetNextSibling(root)) != NULL)
    traverse_tree(node);

  if ((node = mxmlGetFirstChild(root)) != NULL)
    traverse_tree(node);
}

int main(int argc, char *argv[]) {
  // Variable declarations.
  mxml_node_t *tree;
  FILE *fp;

  // Check command line arguments.
  if (argc != 2) {
    printf("usage: %s infile.xsd\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  if ((fp = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "Failed to open file.\n");
    exit(EXIT_FAILURE);
  }

  if ((tree = mxmlLoadFile(NULL, fp, MXML_OPAQUE_CALLBACK)) == NULL) {
    fprintf(stderr, "Failed to read xml into tree.\n");
    exit(EXIT_FAILURE);
  }

  fclose(fp);

  traverse_tree(tree);

  mxmlDelete(tree);



  exit(EXIT_SUCCESS);
}    
