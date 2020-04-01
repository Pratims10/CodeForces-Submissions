#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[3000][3000];
vector<pair<ll,ll> > v;
ll n;
bool srt(pair<ll,ll> a,pair<ll,ll> b)
{
	return a.first<b.first;
}
ll func(ll i,ll lst)
{
	if(i==n)
	return 0;
	ll ret;
	if(dp[i][lst]!=-1)
	return dp[i][lst];
	ret=min(v[i].second+func(i+1,i),v[i].first-v[lst].first+func(i+1,lst));
	return dp[i][lst]=ret;
}

int main()
{
	ll i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		v.push_back({j,k});
	}
	for(i=0;i<3000;i++)
	{
		for(j=0;j<3000;j++)
		dp[i][j]=-1;
	}
	sort(v.begin(),v.end(),srt);
	cout<<v[0].second+func(1,0);
}