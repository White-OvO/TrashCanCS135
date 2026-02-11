#include <iostream> 

using namespace std; 

int maint() { 
// Write a program that outputs 0 (false) when a user enters in a boarding group and time waited lower than the current thresholds, and 1 (true) otherwise. 

// is someone allowed to ride based on two conditions. 
// how long they have waited 
// their baoarding group 


// output  0(false) or 1 ( true ) 

int group = 0; 
int timeWaited = 0; 

const int currentGroup = 10; 
const int currentWait = 60; 

bool canRide = false; 


// get the group 
cout << "Group: " << endl; 

cin >> group; 

cout << "time waited: " << endl; 
cin >> timeWaited;; 
canRide = (group <= currentGroup) && (timeWaited >= currentWait); 
cout << canRide << endl; 
 
    return 0; 
}