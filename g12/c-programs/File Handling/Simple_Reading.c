#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("901.txt", "r");  // open file in read mode
    printf("Contents of 901.txt:\n");
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    printf("\nProgram Executed by Harshit Karna");
    return 0;
}
