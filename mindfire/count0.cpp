#include<stdio.h>
int main()
{
    char input[] = "100";
    int i = 0, counter = 0;
    for(i = 0 ; input[i] != EOF ; i++)
    {
        if(input[i] == '0')
            counter++;
    }
    printf("%d",counter);
}
