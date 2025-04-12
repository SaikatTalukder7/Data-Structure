//insert to begining of the array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,value;
    cout<<"Enter the range of Array: ";
    cin>>n;
    int a[n+1];
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"The element that wants to add: ";
    cin>>value;
    for(int i=n+1; i>=0; i--)
    {
        a[i+1]=a[i];
    }
    a[0]=value;
    n++;
    cout<<"After insertion at the Beginning: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
 return 0;
}
