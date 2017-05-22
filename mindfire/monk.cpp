#include <stdio.h>
#include<stdlib.h>

typedef struct list
{
    int course;
    int *pre;
    list *next;
};


int main()
{
    //printf("Hello World!\n");
    int testCases;
    int arr[10000] = {0};
    int pos = 0;
    int flag = 0;   //For flagging record in case prerequisite exists.
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
                scanf("%d",arr[pos++]);
        }

        pos = 1; //Using pos again for referencing in list
        struct list *node = (list*)malloc(sizeof(struct list));
        if(pos % 2 != 0)
        {
            node -> course = arr[pos];
            //node -> pre = &(arr[pos-1]);
            struct list* iter = frontt;
            struct list* iter2 = frontt;
            struct list* temp;
            struct list* checkDupe = node;
            while(iter != rear)
            {
                //Find matching prerequisite if exists
                if(iter -> course == arr[pos-1])
                {
                    temp = iter -> pre;
                    if(temp -> course == arr[pos])
                    {
                        flag == 1;
                        printf("\nDuplicate\n");
                    }
                }
                iter = iter -> next;
            }
            if(flag == 0)
            {
                struct list *node2 = (list*)malloc(sizeof(struct list));
                node2->course = arr[pos-1];
                node->pre = node2;
            }
            flag = 0;
        }
        if(frontt == NULL)
        {
            frontt = node;
        }
        else
        {
            //rear -> ne
        }



    }







    return 0;
}

