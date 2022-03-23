#include <stdio.h>
#include <string.h>
typedef struct pc{
char pcname[20];
char modalname[25];
int serialnumber;
char osname[25];

}computer;
int main()
{
  computer pc1={"dell","inspiration",154,"macos"};
    printf("pcname is %s\n",pc1.pcname);
printf("modalname is %s\n",pc1.modalname);
printf("serialnumber is %d\n",pc1.serialnumber);
printf("osname is %s\n",pc1.osname);



    return 0;
}
