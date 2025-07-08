#include <stdio.h>

int main(void) {
    FILE *fp;

    fp = fopen("test.8", "w");

    fprintf(fp, "38");

    fclose(fp);

    return 0;
}
