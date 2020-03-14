#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,h,l,r;
ll dp[2001][2001];
ll a[2001];
ll t=0;
ll func(ll idx,ll hr)
{
	if(idx==n)
	{
		hr%=h;
		if(l<=hr and hr<=r)
		return 1;
		else return 0;
	}
	hr%=h;
	ll ctr=0;
	if(l<=hr and hr<=r and idx!=0)
	ctr++;
//	if(ctr)
//	cout<<idx<<' '<<hr<<endl;
	if(dp[idx][hr]==-1)
	{
		ll x=ctr+max(func(idx+1,hr+a[idx]-1),func(idx+1,hr+a[idx]));
		dp[idx][hr]=x;
	}
	return dp[idx][hr];
}
int main()
{
	ll i,j,k,m,t;
	cin>>n>>h>>l>>r;
	for(i=0;i<=2000;i++)
	{
		for(j=0;j<=2000;j++)
		dp[i][j]=-1;
	}
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<func(0,0);
}