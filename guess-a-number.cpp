//
//  main.cpp
//  Task-3
//
//  Created by Yashpal Jat on 23/06/23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(int argc, const char * argv[]) {
    
    srand((unsigned int) time(NULL));
    
    int number = rand() % 100 + 1;
    int guess = 0;
    cout<< "guess a number"<<endl;
    
    do{
        cin>>guess;
        
        if(guess > number)
            cout<<"guess a lower number:"<<endl;
        
        else if(guess < number)
            cout<<"guess a higher number:"<<endl;
        
        else
            cout<< "You Won!"<<endl;
        
    } while(guess != number);
}
