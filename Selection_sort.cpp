#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr={64,25,12,22,11};
    for(int i=0;i<arr.size()-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[minindex]>arr[j])
                minindex=j;
        }
        swap(arr[minindex],arr[i]);
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}