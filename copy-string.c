#include <stdio.h>
void copy(char*,char*);
int main()
{
 //char s[8]="world";
 //char a[8];
 //strcpy(a,s);
 //puts(a);

 char s[8]="world";
 char t[10];
copy(t,s);
printf(" source string");
puts(s);
printf(" target string");
puts(t);
    return 0;
}
void copy(char*t,char*s){

while (*s!='\0'){
   *t=*s;
    t++;
    s++;

}
*t='\0';




}
