#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;
ll ar[19];
map<pair<ll,ll>,ll> mp;
ll dp[262145][19];
ll func(ll mask,ll prev)
{
	if(__builtin_popcountll(mask)==m) return 0;
	if(prev!=-1 and dp[mask][prev]!=-1) return dp[mask][prev];
	ll ret=0;
	for(ll i=0;i<n;i++)
	{
		if((mask&(1<<i))==0)
		{
			//cout<<ar[i]<<"D\n";
			ret=max(ret,ar[i]+mp[{prev,i}]+func(mask|(1<<i),i));
		}
	}
	return dp[mask][prev]=ret;
}
int main()
{
	ll i,j,k,t;
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll a,b,c;
	for(i=0;i<k;i++)
	{
		cin>>a>>b>>c;
		mp[{a-1,b-1}]=c;
	}
	for(i=0;i<pow(2,18);i++)
	{
		for(j=0;j<=18;j++)
		dp[i][j]=-1;
	}
	cout<<func(0,-1);
}