#include <iostream>
#include <cstdlib>
#include <array>
#include <time.h>
#include <ctime>
#include <dos.h>

using namespace std;

void switchSimulation(int numTrials){
    int counter = 0;
    
    srand(time(NULL));
    double correctSwitch = 0;
    while(counter < numTrials){
    int* doors = new int[3];
    int golden = rand() % 3; //generate a random number from 0 to 2
    for(int j = 0; j < 3; j++){
        if(j == golden){
            doors[j] = 100;
        }
        else{
            doors[j] = 0;
        }
    }
        int userChoice = rand() % 3;

        if(doors[userChoice] == 100){
            counter++;
            continue;
        }
        else{
            counter++;
            correctSwitch++;
        }
    }
    double percentage = correctSwitch/numTrials * 100;
    cout << "Switching worked " << correctSwitch << "/" << numTrials << " " << (percentage) << "%" << endl;
}

int main(){
    
    for(int i = 0; i < 10000; i++){
        switchSimulation(i);
    }
    return 0;
}