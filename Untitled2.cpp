#include<stdio.h>
struct student
{
    int roll_no,year;
    char name[25];
    float fee;
    char branch[50];
}stud[100],t;
 
int  main()
{
    int i,j,n;
    printf("Enter the no of students\n");
    scanf("%d",&n);
    printf("enter student info as roll_no , name , year,fee,branch\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %f %s",&stud[i].roll_no,stud[i].name,&stud[i].year,&stud[i].fee,stud[i].branch);
    }
    
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(stud[j].roll_no>stud[j+1].roll_no)
            {
                t=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=t;
            }
        }
    }
    
    printf("\nStudent info in terms of roll.no");
    printf("\nROLL_NO\t\tNAME\t\tYEAR\tFEE\tBRANCHn");
    printf("-------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t\t%s\t\t\t%d\n",stud[i].roll_no,stud[i].name,stud[i].year);
    }
    return 0;
}

