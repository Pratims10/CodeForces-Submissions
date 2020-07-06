#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll ar[n][m],b[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				cin>>ar[i][j];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				b[i][j]=-1;
		}
		b[0][0]=2;
		b[n-1][0]=2;
		b[0][m-1]=2;
		b[n-1][m-1]=2;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(b[i][j]==-1)
				{
    				if(i==0 or j==0 or i==n-1 or j==m-1) b[i][j]=3;
    				else b[i][j]=4;
				}
			}
		}
		bool flag=true;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(ar[i][j]>b[i][j])
				flag=false;
			}
		}
		if(!flag) cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				cout<<b[i][j]<<' ';
				cout<<endl;
			}
		}
	}
}