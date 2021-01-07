#include<iostream>
using namespace std;

//Program for linear search//

int main(){
    int array[20],n,x,i,flag=0;
    cout<<"How many elements of the array\n";
    cin>>n;
    cout<<"\nEnter Elements of the array\n";

    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"\nEnter element to search:";
    cin>>x;

    for(i=0;i<n;i++)
    {
        if(array[i]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"\nElement is found at position "<<i;
    }
    else{
        cout<<"\nElement not found";
    }
    return 0; 
}