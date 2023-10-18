#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the value\n");
    scanf("%d",&n);
    printf("you have enter n as %d",n);

    for ( i = 1; i <=10; i++)
    {
        printf("%d",i);
        sum=sum+i;
    }
    printf("the sum of natural number %d is %d",n,sum);

    
    return 0;
}
