#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter the array values:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1;
    int temp;
    while(i<j)
    {
        temp=0;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}