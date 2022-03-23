#include <stdio.h>
int fact(int n);
int main(){
int factorial=fact(5);
printf("factorial of number=%d",factorial);

return 0;
}
int fact(int n){
if(n==1){

return 1;
}
int fac=n*fact(n-1);



return fac;

}
