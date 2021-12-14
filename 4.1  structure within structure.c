#include<stdio.h>
struct address
{
    char city[10];
    int pincode;
  
};
struct employee
{
    char name[10];
    struct address add;
}emp;
void main()
{
printf("\nEnter the employee information\n");
scanf("%s %s %d",emp.name,emp.add.city,&emp.add.pincode);
printf("\nPrinting the information of the employee\n");
printf("\nName = %s\nCity = %s\nPincode = %d\n\n",emp.name,emp.add.city,emp.add.pincode);

}