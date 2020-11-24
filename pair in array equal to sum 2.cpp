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
    int temp=0;
    cout<<"enter array values:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int i=0;
    int r=n-1;
    while(i<r)
    {
        if(arr[i]+arr[r]>key)
        {
            r--;
        }
        else if(arr[i]+arr[r]<key)
        {
            i++;
        }
        else
        {
            cout<<arr[i]<<" "<<arr[r];
        }
    }
    
    return 0;
    
}