#include <stdio.h>
int sum(int a[]);
int main(){

int a[8]={8,6,5,7,8,96,6,7};
int res= sum(a);
printf("%d",res);
return 0;
}
int sum(int a[]){
   int sum=0;
 for (int i=0;i<=7;i++){
 // printf("%d\n",a[i]);
  sum=sum+a[i];
}
    return sum;


}
