#include <stdio.h>
#include<stdlib.h>

typedef struct list
{
    int course;
    int *pre;
};


int main()
{
    //printf("Hello World!\n");
    int testCases;
    int courses[10000] = {0};
    int pos = 0;
    scanf("%d",testCases);
    struct list *frontt = NULL;
    struct list *rear = NULL;
    while(testCases--)
    {
        int courses = 0, preReq = 0;
        scanf("%d",&courses);
        scanf("%d",&preReq);
        pos = 0;
        while(preReq--)
        {
            for(int i = 0 ; i < 2 ; i++)
                scanf("%d",courses);
        }

        pos = 1; //Using pos again for referencing in list
        struct list *node = (list*)malloc(sizeof(struct list));
        if(pos % 2 != 0)
        {
            node -> course = courses[pos];
            node -> pre = &(courses[pos-1]);
        }
        if(frontt == NULL)
        {

        }



    }







    return 0;
}

