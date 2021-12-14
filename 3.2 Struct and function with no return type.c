#include<stdio.h>

struct student
{
    int Rollno;
    int Marks;
    float Percentage;
};
void displayinfo(struct student );
void main()
{
    struct student s;
    printf("\nEnter the Rollno of the student :\n");
    scanf("%d",&s.Rollno);
    printf("Enter the Marks obtained by the student\n");
    scanf("%d",&s.Marks);
    printf("Enter the Percentage of the student\n");
    scanf("%f",&s.Percentage);
    displayinfo(s);
}
    void displayinfo(struct student m)
{
    printf("\nDisplaying student information ....\n");
    printf("\nHere is the Rollno Marks and Percentage of the student\n");
    printf("Rollno = %d,   Marks = %d,   Percentage = %f\n\n",m.Rollno,m.Marks,m.Percentage);

}
