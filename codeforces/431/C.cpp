#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k,d;
ll dp[101][10001][2];
ll mod=1000000007;
ll func(ll idx,ll sum,ll flag)
{
	if(sum>n)
	return 0;
	if(sum==n)
	{
//		cout<<flag<<' ';
		if(flag)
		return 1;
		else
		{
			return 0;
		}
	}
	if(dp[idx][sum][flag]!=-1)
	return dp[idx][sum][flag];
	ll ans=0;
	for(ll i=1;i<=k;i++)
	{
		if(i>=d)
		ans=(ans%mod+func(idx+1,sum+i,1)%mod)%mod;
		else ans=(ans%mod+func(idx+1,sum+i,flag)%mod)%mod;
	}
	return dp[idx][sum][flag]=ans;
}
int main()
{
	ll i,j;
	cin>>n>>k>>d;
	for(i=0;i<101;i++){
		for(j=0;j<10001;j++)
		dp[i][j][0]=dp[i][j][1]=-1;
	}
	cout<<func(0,0,0);
}