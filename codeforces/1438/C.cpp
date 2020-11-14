#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll ar[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>ar[i][j];
				if((i+j)%2==0 and ar[i][j]%2==1)
				ar[i][j]++;
				else if((i+j)%2==1 and ar[i][j]%2==0)
				ar[i][j]++;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			cout<<ar[i][j]<<' ';
			cout<<'\n';
		}
	}
}