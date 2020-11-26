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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    cout<<"inversions in array is:"<<count;
    return 0;
}