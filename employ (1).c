#include <stdio.h>
#include <string.h>
struct address{
char city[25];
char state[25];
char country[25];
};
struct Employee{
 char employeename[25];
 long int employeenumber;

struct address empadd;


}emp1;
int main(){
strcpy( emp1.employeename,"rahul");
emp1.employeenumber=65686656;

strcpy(emp1.empadd.city,"mumbai");
strcpy(emp1.empadd.state,"maharastra");
strcpy(emp1.empadd.country,"india");
printf("employee name is %s\n",emp1.employeename);
printf("employee number is %ld\n",emp1.employeenumber);
printf("employee city is %s\n",emp1.empadd.city);
printf("employee state is %s\n",emp1.empadd.state);
printf("employee country is %s\n",emp1.empadd.country);




}
