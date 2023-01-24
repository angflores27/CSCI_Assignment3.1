//  Assignment 3.1
//
//  Angela Flores on 10/7/22.
//  CSCI 40 Fall 2022

#include <iostream>
using namespace std;

//first function
int sumSquares(int x, int y)
{
int s=0;
for (int i=x; i<=y; i++)
    s+=(i*i);
    return s;
}

//second function
void flipCoin(int z)
{
int c=0, d=0;
    cout<<"Results of flip: ";
for(int i=1; i<=z; i++){
    if(rand()%2==0) {
        cout<<"T";
        c++; }
    else {
        cout<<"H";
        d++;
    }}
    cout<<endl;
    cout<<"T: "<<c<<endl;
    cout<<"H: "<<d<<endl;
}

int main()
{
    //first function output
    int a, b;
    cout<<"1. Function to calculate the sum of a sequence of squares"<<endl;
    cout<<"Please enter the two positive integers: \n";
    cin>>a>>b;
    cout<<"The sum of the squares of integers between those two numbers is: "<<sumSquares(a,b)<<endl;
    cout<<endl;
    
    //second function output
    cout<<"2. Flip a coin a certain number of times, and count the times it lands on heads or tails."<<endl;
    int e=0;
    cout<<"How many times to flip a coin: ";
    cin>>e;
    flipCoin(e);
    
    cout<<"End of program."<<endl;
    return 0;
    
}
