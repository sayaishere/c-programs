// c program to find largest of three numbers.

#include<stdio.h>
int main()
{
    int n1,n2,n3;
    
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1<n2)
    {
        if(n2<n3)
        {
            printf("Largest number is :%d",n3);
        }
        else
        {
            printf("Largest number is :%d",n2);
        }
    }
    else
    {
        if(n1<n3)
        {
            printf("Largest number is :%d",n3);
        }
        else
        {
            printf("Largest number is :%d",n1);
        }
    }
    return 0;
}