//delete from any position of array
#include <iostream>
using namespace std;
int main()
{
    int n,pos;
    cout<<"Enter the range of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position that want to delete: ";
    cin>>pos;
    if (pos<1 || pos>n)
    {
        cout <<"Invalid position!"<< endl;
    }
    else
    {
        for (int i=pos-1; i<n-1; i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        cout<<"After deletion: ";
        for (int i=0; i<n; i++)
        {
            cout<<arr[i]<< " ";
        }
    }
    return 0;
}
