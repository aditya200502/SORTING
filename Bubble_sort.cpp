#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={64,25,12,22,11};
    int n=5;
    for(int i=1;i<n;i++)
    //Rounds=1 to n-1.
    {
        bool swapped = false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!swapped)
            break;
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }*/
    return 0;
}