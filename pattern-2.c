#include <stdio.h>
int main()
{int n;
 printf("enter a coloum\n");
 scanf("%d",&n);
 for (int i=0;i<=n;i++){
printf("%d\t",i);
    for(int j=1;j<i;j++){
        printf("%d\t",i);


 }
    printf("\n");

 }

    return 0;
}

