#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
ll ar[100001];
ll dp[100001][2];
ll func(ll ind,ll plyr)
{
	if(dp[ind][plyr]!=-1) return dp[ind][plyr];
	ll i,ret=0;
	i=ind-ar[ind];
	while(i>=0)
	{
		if(ar[i]>ar[ind])
		{
			if(func(i,plyr^1)==0)
			ret=1;
		}
		i-=ar[ind];
	}
	i=ind+ar[ind];
	while(i<n)
	{
		if(ar[i]>ar[ind])
		{
			if(func(i,plyr^1)==0)
			ret=1;
		}
		i+=ar[ind];
	}
	return dp[ind][plyr]=ret;
}
int main()
{
	ll i,j,k,m,t;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<n;i++)
	dp[i][0]=dp[i][1]=-1;
	for(i=0;i<n;i++)
	{
		if(func(i,0)==1)
		cout<<"A";
		else cout<<"B";
	}
}