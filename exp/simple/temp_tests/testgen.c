#include <stdio.h>

int main(void) {
    FILE *fp;

    fp = fopen("test.9", "w");

    fprintf(fp, "3890");

    fclose(fp);

    return 0;
}
