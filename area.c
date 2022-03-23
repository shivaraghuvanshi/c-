#include <stdio.h>
#define PI 3.14
#define circle(r)  PI*r*r
int main(){
    int r;
printf("enter a circle of radius\n");
scanf("%d",&r);

int res=circle(r);
printf("area of circle=%d",res);


return 0;


}
