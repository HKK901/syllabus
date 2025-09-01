#include <stdio.h>
struct books {
  int bookid;
  char bookname[50];
  unsigned int price;
};
void strdsply(struct books book[], int n) {
  int i;
  printf("The data stored is:\n\n");
  printf("Book ID\tBook Name\tPrice\n");
  for (i = 0; i < n; i++) {
    printf("%d\t%s\t\t%u\n", book[i].bookid, book[i].bookname, book[i].price);
  }
}
int main() {
  int n = 0, i;
  typedef struct books stbk;
  printf("How many books to enter? ");
  scanf("%d", &n);
  stbk book[n];
  for (i = 0; i < n; i++) {
    printf("Enter book id: ");
    scanf("%d", &book[i].bookid);
    printf("Enter book name: ");
    scanf("%s", book[i].bookname);
    printf("Enter its price: ");
    scanf("%d", &book[i].price);
  }
  strdsply(book, n);
  printf("\nProgram Executed by Harshit Karna\n");
  return 0;
}
