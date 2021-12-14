#include<stdio.h>
struct student
{
    char name[15];
    int age;
};
struct student getinformation(void);
void main()
{
    struct student s1;
    s1=getinformation();
    printf("\nDisplaying information ...\n");
    printf("\nName = %s\n",s1.name);
    printf("Age = %d\n\n",s1.age);

}
struct student getinformation()
{
   

    struct student s1;
    printf("\nEnter the Name of the student :\n");
    gets(s1.name);
    printf("Enter the Age of the Student :\n");
    scanf("%d",& s1.age);

    return s1;
}