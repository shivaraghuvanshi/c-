#include <stdio.h>
void fibonaci();
int main(){
fibonaci();


return 0;
}
void fibonaci(){
int n1=0,n2=1,n3,i,n;

printf("enter a  total serious number\n");
scanf("%d",&n);
for (i=3;i<=n;i++){
    n3=n1+n2;
    printf("%d\n",n3);
    n1=n2;
    n2=n3;

}





}
