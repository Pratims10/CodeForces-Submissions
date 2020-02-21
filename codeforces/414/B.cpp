#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;
int main()
{
	ll i,j,k,m,n;
	cin>>n>>k;
	swap(n,k);
	list<ll> fact[2001];
	for(i=1;i<=2000;i++)
	{
		for(j=i;j<=2000;j+=i)
		fact[j].push_back(i);
	}
	ll dp[n+1][k+1]={0};
	for(i=1;i<=n;i++)
	dp[i][1]=1;
	for(i=1;i<=k;i++)
	dp[1][i]=1;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=k;j++)
		{
			for(auto x:fact[j])
			dp[i][j]=(dp[i][j]%mod+dp[i-1][x]%mod)%mod;
		}
	}
	ll ans=0;
//	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		ans=(ans+dp[n][j])%mod;
		cout<<ans;
	}
}