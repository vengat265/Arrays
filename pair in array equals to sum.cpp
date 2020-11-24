#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    int key;
    cout<<"enter the key value:";
    cin>>key;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter array values:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]+arr[i+1]==key)
        {
            cout<<arr[i]<<" "<<arr[i+1];
        }
        
    }
    return 0;
    
}