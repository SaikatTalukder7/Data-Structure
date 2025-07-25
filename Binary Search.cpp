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
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
       if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
      }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter the element want to search: ";
    cin>>key;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Found\n";
            return 0;
        }
    }
    cout << "Not found\n";
    return 0;
}

