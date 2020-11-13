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
		ll ar[n][m];
		ll b[n];
		map<ll,ll> mp[n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>ar[i][j];
				mp[i][ar[i][j]]++;
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			cin>>b[j];
		}
		map<ll,ll> ind;
		ll f=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			if(ar[0][j]==b[i])
			{
				f=1;
				break;
			}
			if(f)
			break;
		}
		for(i=0;i<n;i++)
		ind[ar[i][j]]=i;
		ll ans[n][m];
		for(i=0;i<n;i++)
		{
			ll row=ind[b[i]];
			for(j=0;j<m;j++)
			ans[i][j]=ar[row][j];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			cout<<ans[i][j]<<' ';
			cout<<endl;
		}
	}
}