#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,value;
    cout<<"enter the range of array: ";
    cin>>n;
    int arr[n+1];
    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value want to insert: ";
    cin>>value;
    arr[n]=value;
    n++;
    cout<<"After insertion at the end: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
