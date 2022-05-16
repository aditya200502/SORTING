#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={64,25,12,22,11};
    int n=5;
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
                arr[j+1]=arr[j];
                //shifting is done.
            else
                break;
                //don't do checking when number is in fixed order.
        }
        arr[j+1]=temp;
        //assign next element value of temp.
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    }
    return 0;
}