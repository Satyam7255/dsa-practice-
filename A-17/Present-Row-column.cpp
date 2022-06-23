#include<bits/stdc++.h>
using namespace std;

 bool isTargetPresentin2d(vector<vector<int> >A, int target)
 {
    for(int r=0;r<A.size();r++)
    {
        for(int c=0;c<A[0].size();c++)
        {
            if(A[r][c]==target)
                return true;
        }
    }
     return false;
 }

bool isTragetPresentInRow(vector<vector<int> >A, int target, int r)
{
    //returns true if target is present in row r of A then returns true else return false;

      for(int c=0;c<A[0].size();c++)   
      {
         if(A[r][c]==target)
         {
         	 return true;
         }
     }
 
     return false;
}
 
 
bool isTragetPresentInCol(vector<vector<int> >A, int target, int c)
{
    //returns true if target is present in row r of A then returns true else return false;


    for(int r=0;r<A.size();r++)   
      {
         if(A[r][c]==target)
         {
         	      return true;
         }

       }
    return false;
}



int main()
{
 
 
 vector<vector<int>>A = { {7,2,12},{9,5,3},{4,10,8}};
 
 
 bool a = isTargetPresentin2d(A,4);
    if (a==0)
    {
    	cout<<"not found.."<<endl;
    }
    else
    {
    	cout<<"found.."<<endl;
    }


 bool b = isTragetPresentInRow(A,5,2); 
    if (b==0)
    {
    	cout<<"not found.."<<endl;
    }
    else
    {
    	cout<<"found.."<<endl;
    }
    
    
 bool c = isTragetPresentInCol(A,7,2);
    if (c==0)
    {
    	cout<<"not found.."<<endl;
    }
    else
    {
    	cout<<"found.."<<endl;
    }
    
 
    return 0;
}
