#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;
ll ar[1000001];
ll dp[1001][1001][2];
ll func(ll ind,ll rem,ll flag)
{
	if(ind==n)
	return rem==0 and flag==1;
	if(dp[ind][rem][flag]!=-1)
	return dp[ind][rem][flag];
	ll ret=0;
	ret|=func(ind+1,rem,flag);
	ret|=func(ind+1,(rem+ar[ind])%m,1);
	return dp[ind][rem][flag]=ret;
}
int main()
{
	ll i,j,t,k;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>ar[i];
	if(n>m)
	cout<<"YES\n";
	else
	{
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=m;j++)
			dp[i][j][0]=dp[i][j][1]=-1;
		}
		if(func(0,0,0))
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}