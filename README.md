# Interarrival-arrival-time-code
##**Interarrival**##
The goal of interarrival is to obtain Interarrival Time from a simulated Poisson Process
Here i use poisson random generator to generate random for interarrival time.
Poisson distribution reference:https://stackoverflow.com/questions/1057621/calculation-of-poisson-distribution-in-c
i called the possion random function in the loop
and use the formula:arrival[i] = arrival[i-1] + interarrival[i];
For show the output use the formula:printf("%d\t %d \t%d\t", i, interarrival[i], arrival[i]);


