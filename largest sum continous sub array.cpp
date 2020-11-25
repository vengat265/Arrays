#include<bits/stdc++.h> 
#include<unordered_map>
using namespace std; 
int main()
{
    int arr[100];
    int n;
    int max_so_far=INT_MIN;
    int max_ending_here=0;
    cout<<"enter n:";
    cin>>n;
    int count=0;
    cout<<"enter the arr values:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        max_ending_here=max_ending_here+arr[i];
        if(max_ending_here>max_so_far)
        {
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0)
        {
            max_ending_here=0;
        }
    }
    cout<<"largest sum continous subarray is: "<<max_so_far;
    return 0;
}