#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    int fact1=1;
    for(int i=2;i<=n1;i++)
    {
        fact1 = fact1*i;
    }

    int fact2 =1;
    for(int j=2; j<=n2; j++)
    {
        fact2 = fact2*j;
    }

    cout<<fact1<<" "<<fact2<<endl;
    
    return 0;
}