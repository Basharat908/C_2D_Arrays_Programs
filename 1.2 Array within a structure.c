#include<stdio.h>
struct student 
{
    char Name[14];
    int Roll_No;
    int Marks;
    float Percentage;
} s[3];
void main()
{ 
    int i;
    
    for(i=0;i<3;i++)
    {
      printf("Enter the Name, Roll_No, Marks, Percentage of the  %d student :\n",i+1);
     
      scanf("%s%d%d%f",s[i].Name, &s[i].Roll_No,&s[i].Marks,&s[i].Percentage);
    }
    printf("\nHere are the details of the 03 students:\n\n");
    printf("Name\tRoll_No\tMarks\tPercentage\n");
    printf("=========================================\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%d\t%d\t%f\n",s[i].Name,s[i].Roll_No,s[i].Marks,s[i].Percentage);
    }
}