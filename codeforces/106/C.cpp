#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m,c0,d0;
ll dp[1001][11];
ll a[11],b[11],c[11],d[11];
const ll INF=999999999;
ll func(ll i,ll j)
{
	if(i>n)
	return -1*INF;
	if(i==n || j==m)
	return 0;
	ll ans=0;
	if(dp[i][j]==-1)
	{
		for(ll k=0;k<=a[j]/b[j];k++)
		{
			ans=max(ans,func(i+k*c[j],j+1)+k*d[j]);
		}
		dp[i][j]=ans;
	}
	return dp[i][j];
}
int main()
{
	ll i,j,k,t;
	memset(dp,-1,sizeof(dp));
	cin>>n>>m>>c0>>d0;
	for(i=0;i<m;i++)
	{
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	ll ans=0;
	for(i=0;i<=n/c0;i++)
	{
		ans=max(ans,func(i*c0,0)+i*d0);
//		cout<<i<<' '<<ans<<endl;
	}
	cout<<ans<<endl;
}