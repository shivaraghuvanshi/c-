#include <stdio.h>
int main ()
{
  char s[10]="maximum";
    char *t;
    t=s;
while (*t!='\0'){
   printf("%c\t",*t);
    t++;

}



    return 0;
}
