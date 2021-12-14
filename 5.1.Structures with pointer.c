#include<stdio.h>
struct student
{
    int Rollno;
    int age;
    float percentage;
};    

void main()
{
    struct student Basharat,*ptr;
    ptr = &Basharat;
    printf("Enter the Rollno of the Basharat :\n");
    scanf("%d",&ptr->Rollno);
    printf("Enter Basharat's age in yrs :\n");
    scanf("%d",&ptr->age);
    printf("Enter the Basharat's Percentage :\n");
    scanf("%f",&ptr->percentage);

    printf("\nDisplaying details ...\n");
    printf("\nRollno = %d\n",ptr->Rollno);
    printf("Age = %d yrs\n",ptr->age); 
    printf("Percentage = %f\n",ptr->percentage);
}