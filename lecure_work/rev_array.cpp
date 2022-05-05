#include<bits/stdc++.h>
using namespace std;
void revArray(vector<int>&arr)
{   int n =arr.size() ;
    for(int i=0;i<arr.size()/2;i++)

       {
       	swap(arr[i],arr[n-i-1]);
       }
}
int main()
{
    vector<int> arr{3,1,2,3,5,6,7};
    revArray(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
