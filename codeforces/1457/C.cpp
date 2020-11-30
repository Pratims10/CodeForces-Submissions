#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dist(ll x1,ll y1,ll x2,ll y2)
{
	return abs(x1-x2)+abs(y1-y2);
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll p;
		cin>>n>>p>>k;
		string s;
		cin>>s;
		ll dp[n]={0};
		ll x,y;
		cin>>x>>y;
		for(i=n-1;i>=0;i--)
		{
			if(i+k<n)
			dp[i]=dp[i+k];
			if(s[i]=='0')
			dp[i]++;
		}
		ll ans=INT_MAX;
		for(i=p-1;i<n;i++)
		{
			ll a=(i+1-p)*y;
			a+=dp[i]*x;
			ans=min(ans,a);
		}
		cout<<ans<<'\n';
	}
}