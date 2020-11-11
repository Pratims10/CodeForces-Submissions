#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m,k;
string s[500];
ll dp[501][501];
ll ar[501][501];
ll b[501];
ll func(ll i,ll k1)
{
	if(i==n) return 0;
	if(dp[i][k1]!=-1) return dp[i][k1];
	ll ret=INT_MAX;
	for(ll j=0;j<=min(k1,b[i]);j++)
	{
		ret=min(ret,ar[i][b[i]-j]+func(i+1,k1-j));
	}
	return dp[i][k1]=ret;
}
int main()
{
	ll i,j,t;
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<=n;i++)
	{
		for(ll k1=0;k1<=k;k1++)
		dp[i][k1]=-1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=m;j++)
		if(j==0)
		ar[i][j]=0;
		else
		ar[i][j]=INT_MAX;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			ll ctr=0;
			for(ll k1=j;k1<m;k1++)
			{
				if(s[i][k1]=='1') ctr++;
				ar[i][ctr]=min(ar[i][ctr],k1-j+1);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		b[i]=0;
		for(j=0;j<m;j++)
		{
			if(s[i][j]=='1')
			b[i]++;
		}
	}
	cout<<func(0,k);
}