#include<iostream>
using namespace std;
int main()
{
    int arr[100],n;
    cout<<"enter n:";
    cin>>n;
    int target;
    cout<<"enter target:";
    cin>>target;
    cout<<"enter arr values:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==target){cout<<"found at index "<<mid;
            return 0;
        }
        else if(arr[l]<arr[mid])
        {
            if(arr[l]<=target && arr[mid]>=target)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        else
        {
            if(arr[mid]<=target && arr[r]<=target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
    }
}