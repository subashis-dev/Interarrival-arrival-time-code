#include<stdio.h>
#include<math.h>

int poissonRandom(double a) {
    int n = 0;
    double limit;
    double x;
    int INT_MAX=100;
    limit = exp(-20);
    x = rand() / INT_MAX;
    while (x > limit) {
        n++;
        x *= rand() / INT_MAX;
    }
    return n;
}

int main()
{
    int i;
    int interarrival[20];
    int arrival[20];
    poissonRandom(19.0);

    interarrival[0] = 0;
    arrival[0] = 0;

    for(i=1;i<20;i++){
        interarrival[i]= poissonRandom(19.0);
    }

    for(i=1;i<20;i++){

        arrival[i] = arrival[i-1] + interarrival[i];//arrival time finding using
    }

    for(int i=0; i<20; i++){
        printf("%d\t %d \t%d\t", i, interarrival[i], arrival[i]);//print the interarrival time and arrival time
        printf("\n");
        }

    return 0;
}


