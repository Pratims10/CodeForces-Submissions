#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;
int  main()
{
	ll i,j,k,m,n,t;
	cin>>t>>k;
	ll dp[100001]={1};
	dp[1]++;
	if(k==1)
	dp[1]++;
	for(i=2;i<=100000;i++)
	{
		if(i-k>=0)
		dp[i]=(dp[i-1]+dp[i-k])%mod;
		else dp[i]=dp[i-1];
	}
	ll ans[100001];
	ans[0]=0;
	ans[1]=dp[1];
	for(i=2;i<=100000;i++)
	{
		ans[i]=dp[i]+ans[i-1];
	}
//	for(i=0;i<5;i++)
//	cout<<dp[i+1]<<' ';
//	cout<<endl;
	while(t--)
	{
		cin>>j>>k;
		ll x=ans[k]-ans[j-1];
		if(x<0)
		x+=mod;
		else x%=mod;
		cout<<x<<endl;
	}
}