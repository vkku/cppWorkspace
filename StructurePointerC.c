#include<stdio.h>
struct a
{
    struct b
    {
        int i;
        float j;
        char ch;
    }x;
    struct c
    {
        int j;
        float g;
        char ch;
    }y;
}z;

int main()
{
    int offset = 0;
    z.x.i = 40;
    //z->x->i = 40;
    //printf("\n%d\n",z.x.i);
    //printf("\n%p",&a);
    int n;
    //n = (((struct b *)(((struct a *)0) -> x)) -> i );
    n =   ((struct b *)(((struct a *)0) -> x)) -> i;
    printf("\nExtracted : %d\n",n);
    //printf("%p",n);
    //offset = (char *)&((struct c *)(&(((struct a *)0) -> y ) -> j)) - (char *)((struct a *)0);
    //printf("\nBase Address of a : %p",(char *)&((struct a *)0));
    return 0;
}
