#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key of array: ";
    cin>>key;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout<<"Found\n";
            return 0;
        }
    }
    cout<<"Not found\n";
    return 0;
}

