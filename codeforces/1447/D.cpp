#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s1,s2;
ll n,m;
ll dp[5001][5001];
ll func(ll i,ll j)
{
	if(i==n or j==m)
	return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	ll ret=0;
	if(s1[i]!=s2[j])
	{
		ret=max(ret,-1+func(i+1,j));
		ret=max(ret,-1+func(i,j+1));
	}
	else
	{
		ret=max(ret,2+func(i+1,j+1));
	}
	return dp[i][j]=ret;
}
int main()
{
	ll i,j,k,t;
	cin>>n>>m;
	cin>>s1>>s2;
	ll ans=0;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		dp[i][j]=-1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		ans=max(ans,func(i,j));
	}
	cout<<ans;
}