#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"enter n:";
    cin>>n;
    int count=0;
    cout<<"enter array values:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<"enter d value:";
    cin>>d;
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        for(int j=1;j<n;j++)
        {
            arr[j-1]=arr[j];
        }
        arr[n-1]=temp;
    }
    
    cout<<"rotated array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}