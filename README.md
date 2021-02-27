### Hi there, I'm Subashis 

[![Website](https://img.shields.io/website?label=codeSTACKr.com&style=for-the-badge&url=https%3A%2F%2Fcodestackr.com)
[![Twitter Follow](https://img.shields.io/twitter/follow/codeSTACKr?color=1DA1F2&logo=twitter&style=for-the-badge)]


## I'm a Husband, Father, Developer, and Teacher!!

- 🔭 I just launched my first course: [Become A VS Code SuperHero!][course]!
- 🌱 I’m currently learning everything 🤣
- 👯 I’m looking to collaborate with other content creators
- 🥅 2020 Goals: Contribute more to Open Source projects
- ⚡ Fun fact: I love to draw and play guitar / drums


# Interarrival-arrival-time-code
##**Interarrival**##
The goal of interarrival is to obtain Interarrival Time from a simulated Poisson Process
Here i use poisson random generator to generate random for interarrival time.
Poisson distribution reference:https://stackoverflow.com/questions/1057621/calculation-of-poisson-distribution-in-c
i called the possion random function in the loop
and use the formula:arrival[i] = arrival[i-1] + interarrival[i];
For show the output use the formula:printf("%d\t %d \t%d\t", i, interarrival[i], arrival[i]);


