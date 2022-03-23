#include <stdio.h>
int sum(int n);
int main(){
int a;
int res=sum(5);

printf("sum of all number=%d",res);
return 0;
}
int sum(int n){

if (n==0){
       return 0;
}

int res=n+sum(n-1);

return res;
}
