
#include<bits/stdc++.h>
using namespace std;
//function for matrix multiplication
vector<vector<int>> mul(vector<vector<int>>m1, vector<vector<int>>m2)
{
    vector<vector<int>> m3;
    int x=0,i,j,k;
    for(i=0;i<m1.size();i++)
    {
        vector<int>r;
        for(j=0;j<m2[0].size();j++)
        { 
        	x=0;
            for(k=0;k<m2.size();k++)
            {
                x += m1[i][k]*m2[k][j];
            }
            r.push_back(x);
        }
        m3.push_back(r);
    }
    return m3;
}
int main()
{
    vector<vector<int>>m1, m2, m3;
    int a ,b,c;
    cout<<"Enter size\n";
    cin>>a>>b>>c;
    
    //input m1
    cout<<"Enter m1\n";
    for(int i=0;i<a;i++)
    {
        vector<int>v;
        int n;
        for(int j=0;j<b;j++)
        {   cin>>n;
            v.push_back(n);
        }
        m1.push_back(v);
    }
    
    //input m2
    cout<<"Enter m2\n";
    for(int i=0;i<b;i++)
    {
        vector<int>v;
        int n;
        for(int j=0;j<c;j++)
        {   cin>>n;
            v.push_back(n);
        }
        m2.push_back(v);
    }
     //pruduct matrix
    m3=mul(m1,m2);
    for(int i=0;i<m3.size();i++)
    {
        for(int j=0;j<m3[i].size();j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
