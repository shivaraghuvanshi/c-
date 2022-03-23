#include <stdio.h>
int main(){
char s[10]="hellowerd";
int v=0;
int con=0;
int i=0;
while(s[i]!='\0'){
  if (s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
v++;
  }
else{con++;}
i++;

}

printf("vowel of string=%d\n",v);
printf("consonant=%d",con);



return 0;
}
