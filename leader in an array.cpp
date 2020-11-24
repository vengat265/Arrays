#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    int j;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter the array values:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i]<arr[j])
        {
        break;
        }
            if(j==n-1)
        {
            cout<<arr[i]<<" ";
        }
        
            
        }
        
        
    }
    return 0;
}