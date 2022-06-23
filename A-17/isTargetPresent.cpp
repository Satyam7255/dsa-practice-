 copy
#include<bits/stdc++.h>
using namespace std;
 
 bool isTargetPresent(vector<int>A, int target){
//returns true if target is present in A else
     for(int i=0;i<A.size();i++)
     {
         if(A[i]==target)
         return true;
     }
     return false;
}
int main()
{
    vector<int> arr = {1,2,3,3,4,5};
    int n=4;
 bool a = isTargetPresent(arr,n);
 
    if (a==0)
    {
    	cout<<endl<<"not found..";
    }
    else
    {
    	cout<<endl<<"found..";
    }
    return 0;
 
}
