#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("901.txt", "a");  // open file in append mode
    fprintf(fp, "I can keep adding new info using append.\n");
    fclose(fp);
    printf("Data appended successfully.\n");
    printf("\nProgram Executed by Harshit Karna");
    return 0;
}