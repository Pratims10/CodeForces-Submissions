#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
ll ar[2001];
ll dp[2001][5];
ll func(ll ind,ll j)
{
	if(ind==n)
	return 0;
	if(j==4) return 0;
	if(dp[ind][j]!=-1) return dp[ind][j];
	ll ret=func(ind+1,j);
	ret=max(ret,func(ind,j+1));
	if(j==0 or j==2)
	{
		if(ar[ind]==1)
		{
			ret=max(ret,1+func(ind+1,j+1));
			ret=max(ret,1+func(ind+1,j));
		}
	}
	if(j==1 or j==3)
	{
		if(ar[ind]==2)
		{
			ret=max(ret,1+func(ind+1,j+1));
			ret=max(ret,1+func(ind+1,j));
		}
	}
	return dp[ind][j]=ret;
}
int main()
{
	ll i,j,k,m,t;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=4;j++)
		dp[i][j]=-1;
	}
	cout<<func(0,0);
}