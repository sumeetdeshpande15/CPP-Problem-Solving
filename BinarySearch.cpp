#include<iostream>
using namespace std;

//Recursive implementation of Bimary Search//

int BinarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[20];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

cout<<BinarySearch(arr,n,key)<<endl;

    return 0;
}