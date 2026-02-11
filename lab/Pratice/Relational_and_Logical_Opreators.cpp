#include<iostream> 
using namespace std;

int main() { 

// write a program that outputs 0 ( false ) if a user enters a username that is not " Cherbacca: other wise outputs are 1 ( true ))"

//declaring a iuput from the client 
string userInput; 
// declaring the password 
const string password = "chewbacca";


cout << " Enter the password : " << endl; 

// set up a fales state for the password till its entered correctly 
bool correctPassword = false; 
//cin >> string password; 
getline(cin, userInput); 


//check if the input and password are correct. 

correctPassword = (userInput == password); 
cout << correctPassword << endl; 



    return 0; 
}