#include<stdio.h>
struct emp
{
    char name[20];
    int age;
    long int phno;
    int sal;
};
int main()
{
    struct emp arr[20];
    int i,n;
    printf("ENTER THE NUMBER OF EMPLOYEES FOR WHICH DATA HAS TO BE ENTERED(max-20):\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTERING DETAILS FOR EMPLOYEE %d\n",i+1);
        printf("NAME,AGE,PHONENUMBER,SALARY\n");
        scanf("%s %d %ld %d",arr[i].name,&arr[i].age,&arr[i].phno,&arr[i].sal);
    }
    printf("\n\n\n");
    printf("PRINTING EMPLOYEE INFORMATION\n\n");
    printf("NAME \t\t\t AGE\t\t\t  PHONENUMBER\t\t\t  SALARY\n\n");
    for(i=0;i<n;i++)
    {
        printf("%s \t\t\t %d\t\t\t  %ld\t\t\t   %d\n",arr[i].name,arr[i].age,arr[i].phno,arr[i].sal);
    }
    
    
    
    
    
    
}
