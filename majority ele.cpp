#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"enter n:";
    cin>>n;
    int count=0;
    int max_count=0;
    int value=0;
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }
        if(max_count<count)
        {
            max_count=count;
            value=arr[i];
        }
    }
    if(max_count>n/2)
    {
        cout<<value<<" has "<<max_count<<" elements";
    }
    else
    {
        cout<<"no majority";
    }
}