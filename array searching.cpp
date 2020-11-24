#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    int key;
    cin>>key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"the position of the ele in the array is "<<i+1;
            return 0;
        }
    }
}