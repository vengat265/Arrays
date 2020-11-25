#include<bits/stdc++.h> 
#include<unordered_map>
using namespace std; 
int main()
{
    int arr[100];
    int n;
    cout<<"enter n:";
    cin>>n;
    int count=0;
    cout<<"enter the arr values:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(auto i : hash)
    {
        if(i.second%2!=0)
        {
            cout<<"the odd occ ele is "<<i.first<<" ";
        }
    }
    
}