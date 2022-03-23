#include <stdio.h>
int main (){
int n,rem,sum_cube=0;
printf("please enter a number\n");
scanf("%d",&n);
int m=n;
while (n!=0){
    rem=n%10;
    sum_cube=(rem*rem*rem)+sum_cube;
    n=n/10;
}
printf("%d\n",sum_cube);
if (m==sum_cube){
    printf("%d is a armstrong number\n",m);
}
else {
    printf("%d is not a armstrong number",m);
}




return 0;
}
