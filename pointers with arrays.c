#include <stdio.h>
int main(){
int a[6]={4,5,6,8,9,7};

printf("address of a[0]=%u\n",&a[0]);
//a[1]=&a[0];
//printf("value of a[1]=%d\n",a[0]);
//printf("value of a[0]=%d\n",a[0]);
printf("address of a[1]=%u\n",&a[1]);
a[0]=&a[1];
printf("value of a[0]=%u\n",a[1]);
printf("value of a[1]=%d\n",a[1]);

return 0;
}
