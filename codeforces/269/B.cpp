#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,t,n,m;
	cin>>n>>m;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		double j;
		cin>>ar[i]>>j;
	}
	ll dp[n];
	for(i=0;i<n;i++)
	dp[i]=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(ar[j]<=ar[i])
			{
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	ll ans=0;
	for(i=0;i<n;i++)
	{
		ans=max(ans,dp[i]);
	}
	cout<<n-ans;
}