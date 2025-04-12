//Delete from beginning
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the range of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"After delete at the beginning: ";
    for(int i=0; i<n-1; i++)
    {
       arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
    cout << arr[i] << " ";
    }
    return 0;
}
