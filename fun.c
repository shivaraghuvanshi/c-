#include <stdio.h>
#include <string.h>
struct book
{
   char bookname[15];
   float  bookprices[15];
   int bookpages[15];

}b1;
int main(){

strcpy(b1.bookname,"hindi");
strcpy(b1.bookprices,"15.15");
int b1.bookpages=15;
printf("bookname is %s\n",b1.bookname);
printf("prices of book=%f\n",b1.bookprices);
printf("pages of book=%d\n",b1.bookpages);









return 0;
}
