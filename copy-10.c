#include <stdio.h>
#include <string.h>
struct property{
 char ownername[20];
 char clindname[15];
 int price;
};
int main(){
struct property pr1={"rajesh","deepak",245856};
struct property pr2;
strcpy(pr2.ownername,pr1.ownername);
printf("ownername=%s\n",pr2.ownername);


return 0;
}
