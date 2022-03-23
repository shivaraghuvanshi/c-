#include <stdio.h>
int main(){
int *ptr,n1;
printf("enter a length of arrays\n");
scanf("%d",&n1);
for (int i=0;i<n1;i++){
    scanf("%d",ptr+i);
}
printf("%d",*(ptr+5));
int n2;
printf("enter a actual length arrays\n");
scanf("%d",&n2);
ptr=(int*)(realloc(n2,sizeof(int)));
printf("%d",*(ptr+2));

free (ptr);


return 0;
}
