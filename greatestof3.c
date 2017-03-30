#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b)
    {
        if(a > c)
            printf("\n%d is largest",a);
    }
    else if(b > a && b > c)
        printf("\n%d is largest",b);
    else
        printf("%d is largest",c);


    return 0;
}
