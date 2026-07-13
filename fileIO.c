#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "w");

    fprintf(fp, "Hello World!\n");
    fprintf(fp, "Welcome to C Programming.");

    fclose(fp);

    return 0;
}