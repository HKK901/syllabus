#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("901.txt", "w");  // open file in write mode
    fprintf(fp, "Hello, this is a test file.\n");
    fclose(fp);
    printf("Data written successfully.\n");
    printf("\nProgram Executed by Harshit Karna");
    return 0;
}
