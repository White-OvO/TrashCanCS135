#include<iostream> 

using namespace std; 

int main() { 

    

    // get the user info 
    string userInput ="";

    const string password = "chris"; 
    bool correctPassword = false; 


    cout << "Enter the password: " << endl; 


    getline(cin, userInput); 

    correctPassword = (userInput == password); 

    cout << correctPassword << endl; 
    return 0; 
}