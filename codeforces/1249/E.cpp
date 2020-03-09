#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,c;
	t=1;
	while(t--)
	{
		cin>>n>>c;
		ll a[n],b[n];
		for(i=1;i<n;i++)
		cin>>a[i];
		for(i=1;i<n;i++)
		cin>>b[i];
		ll dp[n][2];
		dp[0][0]=0;
		dp[0][1]=c;
		for(i=1;i<n;i++)
		{
			dp[i][0]=min(dp[i-1][0]+a[i],dp[i-1][1]+a[i]);
			dp[i][1]=min(dp[i-1][0]+b[i]+c,dp[i-1][1]+b[i]);
		}
		for(i=0;i<n;i++)
		cout<<min(dp[i][0],dp[i][1])<<' ';
	}
}