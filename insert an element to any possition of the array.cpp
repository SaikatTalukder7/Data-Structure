//insert to any possition of the array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int pos;
    cout<<"enter the position : ";
    cin>>pos;
    int value;
    cout<<"enter the value to insert : ";
    cin>>value;
    for(int i=n-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    n++;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
