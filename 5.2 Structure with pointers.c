#include<stdio.h>
#include<stdlib.h>
struct person
{
    char name[15];
    int age;
    float weight;
};
void main()
{
    struct person *ptr;
    int i,n;
    printf("Enter the Number of persons: \n");
    scanf("%d",&n);
    ptr=(struct person*)malloc(n * sizeof(struct person));
    for(i=0;i<n;i++)
    {
        printf("Enter the first Name and Age  and weight student  respectively:\n");
        scanf(" %s %d %f",&(ptr+i)->name, &(ptr+i)->age,&(ptr+i)->weight);
    }
        printf("\nDisplaying Information ...\n");
        for(i=0;i<n;i++)
        {
         printf("\nName = %s,  Age = %d yrs,  weight  = %f kg\n\n",(ptr+i)->name,(ptr+i)->age,(ptr+i)->weight);
        }
}