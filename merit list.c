//WAP to that illustrates the use of the structures in generation of  merit list 
#include<stdio.h>
#include<string.h>
struct Student 

{
    char name [15];
    int rollno;
    int marks;
};
void main()
{
    int i,j;
    struct Student s[3],t;
    printf("\nEnter the details of three students \n");
    for(i=0;i<3;i++)
    {
        printf("Enter the Name, Rollno and Marks of %d student\n",i+1);
        scanf("%s %d %d",&s[i].name,&s[i].rollno, &s[i].marks);
    }
    printf("\nYou have Entered the Following Details\n\n");
    printf("Name\tRoll No\t   Marks\t\n");
    printf("==========================\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%d\t%d\n",s[i].name,s[i].rollno,s[i].marks);
 
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        if(s[j].marks<s[i].marks)
        {
            strcpy(t.name,s[i].name);
            strcpy(s[j].name,s[i].name);
            strcpy(s[i].name,t.name);

            t.rollno=s[j].rollno;
            s[j].rollno=s[i].rollno;
            s[i].rollno=t.rollno;

            t.marks=s[j].marks;
            s[j].marks=s[i].marks;
            s[i].marks=t.marks;


        }

    }
}
printf("\nHere is the merit list \n\n");
printf("Name\trollno\tmarks\n");
printf("======================\n");
for(i=0;i<3;i++)
{
    printf("%s\t%d\t%d\n",s[i].name,s[i].rollno,s[i].marks);
}
}