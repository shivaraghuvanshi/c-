//#include <stdio.h>
//int main (){
//int a[5]={4,5,6,8,5};
//printf("%d and %d\n",a[2],a[4]);
//a[5]=10;
//printf("%d",a[5]);
//}
#include <stdio.h>
int main(){
    int n,sum=0;
printf("enter a arrays length\n");
scanf("%d",&n);

int i,a[n];
for(i=0;i<n;i++){
printf("inter a index value %d\n",i);
  scanf("%d\n",&a[i]);
}
for(i=0;i<n;i++){
   sum =sum+a[i];}

printf("%d\n",sum);



return 0;
}
