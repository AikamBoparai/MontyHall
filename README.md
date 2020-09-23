# MontyHall
A project demonstrating the effects of variable change in the famous Monty Hall Problem

If you are unfamilar with the Monty Hall problem you can watch these short videos
1. https://www.youtube.com/watch?v=9vRUxbzJZ9Y
2. https://www.youtube.com/watch?v=iBdjqtR2iK4 (A more fun video)

The purpose of this software is to indeed demonstrate that when you switch doors your chances of getting the car are 66.6%.
Most people would assume that the chance is 50%, however this is incorrect.  

In this short project I try to mimic the Monty Hall scenario by having a random number generated between 0-2 and another random number generated to demonstrate where the car is. 

The program will check if the second number points to the car with a 33.3% chance. If it doesn't we know then that doors should've been switched since we now know the car is in one of the other 2 doors. Also we know that one of these doors gets eliminated by the host meaning the user should've switched.

We simulate this process 10,000 times (could always do more or even less) keeping a count of the number of times we should've switched and realize that we should've switched doors every time since, there was a 66.6% success rate (shown in the console). 
