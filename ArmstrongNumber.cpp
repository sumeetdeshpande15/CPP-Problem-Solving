#include<iostream>
#include<cmath>
using namespace std;

//Program to check whether a given number is an Armstrong Number or not//

int main()
{
    int num, originalNumber, remainder, result = 0;
    cout<< "Enter an integer: ";
    cin>>num;
    originalNumber = num;

    while (originalNumber>0) 
    {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }
    if(result == num)
    {
        cout<< num << " Is an Armstrong Number."<<endl;
    }
    else
    {
        cout<< num << " Is not an Armstrong Number."<<endl;
    }
    return 0;     
    
}
