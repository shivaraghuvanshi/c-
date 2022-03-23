#include <stdio.h>
#include <string.h>
struct Book{
char bookname[50];
char authorname[50];
char publicationname[50];
int bookid;
} b1,b2;
int main(){
strcpy(b1.bookname,"herry");
strcpy(b1.authorname,"kanaetkar");
strcpy(b1.publicationname,"kahjudh");
b1.bookid=154;
printf("bookid is %d\n",b1.bookid);
printf("bookname is %s: \n",b1.bookname);
printf("authorname is %s: \n",b1.authorname);
printf("publicationname is %s: \n",b1.publicationname);
strcpy(b2.bookname,"temprery");
strcpy(b2.authorname,"richardarshan");
strcpy(b2.publicationname,"selphsd");
printf("bookname is %s\n",b2.bookname);
printf("authorname is %s\n",b2.authorname);
printf("publicationname is %s\n",b2.publicationname);
return 0;
}
