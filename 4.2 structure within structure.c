// structure within structure
#include<stdio.h>
#include<string.h>

struct employee
{
    char name[20];          
    int age;
        struct date
        {
         int day;
         int month;
         int year;
        }doj;
}emp;
void main()
{
  strcpy(emp.name,"Basharat Ahmad Mir");
  emp.age=20;
  emp.doj.day=10;
  emp.doj.month=11;
  emp.doj.year=2021;
  //printing the details information

 printf("\nEmployee Name = %s\n",emp.name);
 printf("\nEmployee Age = %d\n",emp.age);
 printf("\nEmployee date of joining(date/month/year):%d/%d/%d\n\n",emp.doj.day,emp.doj.month,emp.doj.year);

}