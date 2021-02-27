# Interarrival-arrival-time-code
Here i use poisson random generator to generate random for interarrival time.
Poisson distribution reference:https://stackoverflow.com/questions/1057621/calculation-of-poisson-distribution-in-c
i called the possion random function in the loop
and use the formula:arrival[i] = arrival[i-1] + random[i];


