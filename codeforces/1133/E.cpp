#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
vector<ll> v;
ll dp[5001][5001];
ll func(ll ind,ll k1)
{
	if(ind==n || k1==k) return 0;
	if(dp[ind][k1]!=-1) return dp[ind][k1];
	ll ret=func(ind+1,k1);
	ll pos=upper_bound(v.begin(),v.end(),v[ind]+5)-v.begin();
	pos--;
	ret=max(ret,pos-ind+1+func(pos+1,k1+1));
	return dp[ind][k1]=ret;
}
int main()
{
	ll i,j,m,t;
	cin>>n>>k;
	for(i=0;i<n;i++)
	cin>>j,v.push_back(j);
	sort(v.begin(),v.end());
	for(i=0;i<=n;i++)
	{
		for(j=0;j<k;j++)
		dp[i][j]=-1;
	}
	cout<<func(0,0);
}