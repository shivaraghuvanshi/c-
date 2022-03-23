#include <stdio.h>
int main(){
int *ptr,n;
printf("enter a length of arrays\n");
scanf("%d",&n);
      int  sum=0;

ptr=(int*)(malloc(n*sizeof(int)));
for(int i=0;i<n;i++){
    scanf("%d",ptr+i);
    sum=sum+*(ptr+i);

}
printf("%d",sum);
free (ptr);












return 0;
}
