
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int rc ,i,j,k;
	
	cin>>rc;
	//m1
	int m1[3][3];
	for(i=0;i<rc;i++)
	{
		for(j=0;j<rc;j++)
		{
			cin>>m1[i][j];
		}
		
	}
	
    int m2[3][3];
	for(i=0;i<rc;i++)
	{
		for(j=0;j<rc;j++)
		{
			cin>>m2[i][j];
		}
		
	}
	
	
	int m3[3][3];
	for(i=0;i<rc;i++)
	{
		for(j=0;j<rc;j++)
		{
			m3[i][j]=0;
			for(k=0;k<rc;k++)
			{
			m3[i][j] = m1[i][k]*m2[k][j] + m3[i][j] ;
			
			}
			cout<<m3[i][j]<<" ";
			
			
		}
		cout<<"\n";
	}
	
/*	for (i=0;i<rc;i++)
	{
		for(j=0;j<rc;j++)
		{
			cout<<m3[i][j]<<" ";
		}
		cout<<endl;
	}
	
	*/
	
	return 0;
}
