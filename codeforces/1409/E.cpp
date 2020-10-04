#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
ll dp[200001][2];
vector<ll> v;
ll func(ll ind,ll x)
{
	if(ind>=n)
	return 0;
	if(x==2)
	return 0;
	if(dp[ind][x]!=-1)
	return dp[ind][x];
	ll ret=func(ind+1,x);
	ll pos=upper_bound(v.begin(),v.end(),v[ind]+k)-v.begin();
	ret=max(ret,pos-ind+func(pos,x+1));
	return dp[ind][x]=ret;
}
int main()
{
	ll i,j,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=0;i<=n;i++)
		dp[i][0]=dp[i][1]=-1;
		v.clear();
		for(i=0;i<n;i++)
		{
			cin>>j;
			v.push_back(j);
		}
		sort(v.begin(),v.end());
		for(i=0;i<n;i++)
		cin>>j;
		cout<<func(0,0)<<endl;
	}
}