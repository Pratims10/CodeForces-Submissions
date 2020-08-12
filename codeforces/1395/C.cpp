#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;
ll dp[201];
ll ar[201],b[201];
bool check(ll a,ll b)
{
	for(ll i=0;i<10;i++)
	{
		//cout<<(1<<i)<<' ';
		if((a&(1<<i)))
		{
			if((b&(1<<i))==0)
			return false;
		}
	}
	//cout<<a<<' '<<b<<endl;
	return true;
}
ll func(ll ind)
{
	if(ind==n) return 0;
	if(dp[ind]!=-1) return dp[ind];
	ll ret=LLONG_MAX;
	for(ll i=0;i<m;i++)
	ret=min(ret,(ar[ind]&b[i])|func(ind+1));
	return dp[ind]=ret;
}
int main()
{
	ll i,j,k,t,x,y;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<m;i++)
	cin>>b[i];
	ll dp[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		dp[i][j]=(ar[i]&b[j]);
	}
	for(ll x=0;x<=pow(2,9);x++)
	{
		bool flag=true;
		for(i=0;i<n;i++)
		{
			bool f=false;
			for(j=0;j<m;j++)
			if(check(dp[i][j],x))
			f=true;
			if(!f) flag=false;
		}
		if(flag)
		{
			cout<<x;
			return 0;
		}
	}
}
/*
3 5
179 261 432
379 357 202 184 197
*/