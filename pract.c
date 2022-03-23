#include <stdio.h>
#include <string.h>
struct person{

char name[20];
int age;
char country[20];
};
int main (){
struct person p1={"rahul",20,"india"};
printf("address of name %u\n",&p1.name);
printf("address of age %u\n",&p1.age);
printf("address of country %u\n",&p1.country);



return 0;
}
