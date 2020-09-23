# MontyHall
A project demonstrating the effects of variable change in the famous Monty Hall Problem

If you are unfamilar with the Monty Hall problem you can watch these short videos
1. https://www.youtube.com/watch?v=9vRUxbzJZ9Y
2. https://www.youtube.com/watch?v=iBdjqtR2iK4 (A more fun video)

The purpose of this software is to indeed demonstrate that when you switch doors your chances of getting the car are 66.6%.
Most people would assume that the chance is 50%, however this is incorrect.  

In this short project I try to mimic the Monty Hall scenario by having a random number generated between 0-2 to set where the car will be and another random number generated to simulate the user picking one of these doors.

The program will check if the user's choice (second number generated) points to the car with a 33.3% chance. If it doesn't, we know then that doors should've been switched since we now know the car is in one of the other 2 doors. Also we know that one of these doors gets eliminated by the host.

We will run this experiment in a loop thus, at index 10 we will run this experiment 10 times and check how many times switching worked. At index 1000 we will run this simulation 1000 times and check how many times switching worked. What you'll notice is that the success rate of switching is approaching and stabilizing at 66.6% with the more trials we run.

## Small number of trials
![Small Number of trials](https://github.com/AikamBoparai/MontyHall/blob/master/images/smallNumTrials.png)

## Large number of trials
![Large Number of trials](https://github.com/AikamBoparai/MontyHall/blob/master/images/highNumTrials.png)
