#include <stdio.h>
int main(){
int a[5];
int sum=0;
for(int i=0;i<5;i++){
 scanf("%d",a+i);
sum=sum+*(a+i);
}
printf("sum= %d",sum);




return 0;
}
