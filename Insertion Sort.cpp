#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        {
          cin>>a[i];
        }
    for(int i=1; i<n; i++)
    {
      int count = a[i];
      int j = i-1;

      while(a[j] > count && j>=0)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=count;
    }
    for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

