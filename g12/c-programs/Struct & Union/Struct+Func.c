#include <stdio.h>
#include <string.h>
struct student {
  char name[50];
  char address[100];
};
void inptStd(struct student s[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Enter name of student %d: ", i + 1);
    scanf("%s", s[i].name);
    printf("Enter address of student %d: ", i + 1);
    scanf(" %s", s[i].address);
  }
}
void sortStd(struct student s[], int n) {
  struct student temp;
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (strcmp(s[i].name, s[j].name) > 0) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
      }
    }
  }
}
void dsplyStd(struct student s[], int n) {
  printf("\nStudents sorted by name:\n");
  printf("Name\t\tAddress\n");
  int i;
  for (i = 0; i < n; i++) {
    printf("%s\t\t%s\n", s[i].name, s[i].address);
  }
}
int main() {
  struct student students[5];
  inptStd(students, 5);
  sortStd(students, 5);
  dsplyStd(students, 5);
  printf("\nProgram Executed by Harshit Karna");
  return 0;
}
