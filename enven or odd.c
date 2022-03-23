#include <stdio.h>
int main(){
int a[10]={8,8,9,3,5,7,8,2,12,11};
int even=0,odd=0;
for (int i=0;i<=9;i++){
 if(a[i]%2==0){
        even++;
    }
   else {odd++;}

}

printf("even number this group=%d\n",even);
printf("odd number this group=%d\n",odd);
return 0;
}
