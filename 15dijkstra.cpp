#include<iostream>
using namespace std;
const int INF=9999;
int main()
{
	cout<<"********DIJKSTRAS ALGORITHM**********";
	cout<<"\n";
	int a[4][4];
	int cost[4][4]={7,5,0,0,7,0,0,2,0,3,0,0,4,0,1,0};
	int i,j,k,n=4;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++) 
		{
			if(cost[i][j]==0)
				a[i][j]=INF;
			else
				a[i][j]=cost[i][j];
		}
	}
	cout<<"Adjacency matrix of cost of edges\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		for(k=0;k<n;k++)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(a[i][j]>a[i][k]+a[k][j])
						a[i][j]=a[i][k]+a[k][j];
				}
			}
		}
		cout<<"\n";
	}
	cout<<"Adjacency matrix of lowest cost between the vertices:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
