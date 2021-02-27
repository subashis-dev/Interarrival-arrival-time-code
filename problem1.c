#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int poissonRandom()
{
    int n = 0; //counter of iteration
    double limit;
    double x;  //pseudo random number
    int INT_MAX= 100;
    limit = exp(-20);
    x = rand() / INT_MAX;
    while (x >limit)
    {
        n++;
        x *= rand() / INT_MAX;
    }

    return n;
}

    int main()
    {
        int g,n,i,interarrival[100],arrival[100];

        int random[1000];

        arrival[0]=0, random[0] = 0;
        for(i=1; i<21; i++)
        {
            random[i]= poissonRandom(20);
            arrival[i] = arrival[i-1] + random[i];
        }
        for(int c=0; c<20; c++){
        printf("%d\t %d \t%d\t", c, random[c], arrival[c]);
        printf("\n");
        }
    }
