#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define F first
#define S second
ll n,m,k;
ll dp[76][76][36][76];
ll ar[76][76];
ll func(ll i,ll j,ll ctr,ll r)
{
	if(i==n)
	{
		return (r==0)?0:LLONG_MIN;
	}
	if(j==m)
	return func(i+1,0,0,r);
	if(dp[i][j][ctr][r]!=-1) return dp[i][j][ctr][r];
	ll ret=LLONG_MIN;
	if(ctr<(m/2))
	{
		ret=max(ret,ar[i][j]+func(i,j+1,ctr+1,(r+ar[i][j])%k));
	}
	ret=max(ret,func(i,j+1,ctr,r));
	return dp[i][j][ctr][r]=ret;
}
int main()
{
	ll i,j,t;
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cin>>ar[i][j];
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			for(ll a=0;a<=35;a++)
			{
				for(ll b=0;b<=k;b++)
				dp[i][j][a][b]=-1;
			}
		}
	}
	ll ans=func(0,0,0,0);
	ans=max(ans,0ll);
	cout<<ans;
}