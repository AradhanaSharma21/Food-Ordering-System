#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

struct mydatabase
{
    char emp_name[200];
    int emp_age;
    float emp_salary;
};
int main()

{
 struct mydatabase employee;
 char ch;
 int a=1;
 FILE * fpointer;
 fpointer =fopen("employeesFile.txt","w");


do
{


    printf("Enter the name of the employee %d: ",a);
    scanf(" %s",employee.emp_name);
    printf("Enter the age of the employee %d: ",a);
    scanf("%d",&employee.emp_age);
    printf("Enter the salary of the employee%d: ",a);
    scanf("%f",&employee.emp_salary);
    printf("\nThe name of the employee %d is : %s",a,employee.emp_name);
    printf("\nThe age of the employee %d is : %d",a,employee.emp_age);
    printf("\nThe salary of the employee %d is : %0.3f\n\n",a,employee.emp_salary);
    fprintf(fpointer,"\nThe name of the employee %d is: %s",a,employee.emp_name);
    fprintf(fpointer,"\nThe age of the employee %d is: %d",a,employee.emp_age);
    fprintf(fpointer,"\nThe salary of the employee %d is: %0.3f\n",a,employee.emp_salary);
    a++;
    printf("\n\nDo you want to add more data of employees y/n: ");
    scanf(" %c",&ch);
 }while(!(ch=='n'));


   fclose(fpointer);
return 0;
}

