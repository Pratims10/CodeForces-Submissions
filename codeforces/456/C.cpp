#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[100001],dp[100001];
ll f[100001];
ll n;
ll mx=0;
ll func(ll ind)
{
	if(ind>mx) return 0;
	if(dp[ind]!=-1) return dp[ind];
	ll ret=func(ind+1);
	ret=max(ret,ind*f[ind]+func(ind+2));
	return dp[ind]=ret;
}
int main()
{
	ll i,j,k,t,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		f[ar[i]]++;
		mx=max(mx,ar[i]);
	}
	memset(dp,-1,sizeof(dp));
	cout<<func(1)<<'\n';
}