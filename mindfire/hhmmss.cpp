#include<stdio.h>
#include<stdlib.h>
char* conv(char* , char*, char*);

int main()
{
    char *output;
    char *input1 = "10:10:64";
    char *input2 = "10:49:64";
    output = (char *)malloc(sizeof(int)*20);
    output = conv(input1, input2, output);
    printf("%s", output);
    return 0;
}

char* conv(char* input1, char* input2, char* output)
{
    char result[20];
    int time1[20], time2[20], totTime[20] = {0};
    int sizeArr = 0;
    int i = 0;


    for(i = 0   ; input1[i] != '\0'   ;   i++)
    {
        time1[i] = (input1[i] - '0');
    }

    for(i = 0   ; input2[i] != '\0'   ;   i++)
    {
        time2[i] = (input2[i] - '0');
    }

    int hh = 0, mm = 0, ss = 0;

    hh = (time1[0] * 10) + (time1[1]);
    mm = (time1[3] * 10) + (time1[4]);
    ss = (time1[6] * 10) + (time1[7]);

    hh += (time2[0] * 10) + (time2[1]);
    mm += (time2[3] * 10) + (time2[4]);
    ss += (time2[6] * 10) + (time2[7]);

    //printf("\nSecond : %d\n",ss);
    int buff = 0, rem = 0, ones = 0, tens = 0;
    if(ss >= 60)
    {                                                                  // h h : m m : s s
        totTime[4] += ss/60;                                           // 0 1 2 3 4 5 6 7
        ss %= 60;
        tens = ss/10;
        ones = ss - ((ss/10)* 10);

        totTime[7] = ones;
        totTime[6] = tens;
    }
    else
    {
        totTime[7] = time1[7] + time2[7];
        totTime[6] = time1[6] + time2[6];
    }

    if(mm >= 60)
    {
        totTime[1] += ss/60;
        mm %= 60;
        tens = mm/10;
        ones = mm - ((mm/10)* 10);
        totTime[4] = ones;
        totTime[3] = tens;
    }
    else
    {
        totTime[4] = time1[4] + time2[4];
        totTime[3] = time1[3] + time2[3];
    }



    if(hh >= 24)
    {
        hh %= 24;
        tens = hh/10;
        ones = hh - ((hh/10)* 10);
        totTime[1] = ones;
        totTime[0] = tens;
    }
    else
    {
        totTime[1] = time1[1] + time2[1];
        totTime[0] = time1[0] + time2[0];
    }

    for(i = 0   ; i < 9   ;   i++)
    {
        if(i == 2 || i == 5)
        {
            totTime[i] = time1[i];
            continue;
        }

    }


    for(i = 0   ;    i < 8   ;   i++)
    {
        result[i] = totTime[i] + '0';
    }
    result[8] = '\0';

    for(i = 0 ; i <= 9 ; i++)
    {
        output[i] = result[i];
    }
    return output;

}
