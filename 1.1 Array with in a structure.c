#include<stdio.h>
struct student
{
    char name[15];
    int roll_no;
    int marks;
    float percentage;
};
void main()
{
    struct student s;
    printf("Enter the  Name   Roll_no    Marks  and   Percentage of the student\n");
    scanf("%s%d%d%f",s.name,  &s.roll_no,  &s.marks,   &s.percentage);
    printf("Here is the Name   Roll_no    Marks and   Percentage of the student\n");
    printf("Name =%s,    Roll_no =%d,     Marks =%d,   Percentage =%f", s.name,s.roll_no,s.marks,s.percentage);
    printf("Total Bytes of memeory allocated by structure variable =%d  bytes\n",sizeof(s));


}