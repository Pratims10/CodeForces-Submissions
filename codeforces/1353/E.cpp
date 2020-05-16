#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
ll dp[1000001];
string s;
ll cnt[1000001]={0};
ll func(ll ind)
{
	if(ind>=n) return 0;
	if(dp[ind]!=-1) return dp[ind];
	ll ret=cnt[n-1]-cnt[ind];
	if(s[ind]=='1')
	ret=min(ret,cnt[min(n-1,ind+k-1)]-cnt[ind]+func(ind+k));
	else
	ret=min(ret,1+cnt[min(n-1,ind+k-1)]-cnt[ind]+func(ind+k));
	return dp[ind]=ret;
}
int main()
{
	ll i,j,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cin>>s;
		if(s[0]=='1') cnt[0]=1;
		else cnt[0]=0;
		for(i=1;i<n;i++)
		if(s[i]=='1')
		cnt[i]=cnt[i-1]+1;
		else cnt[i]=cnt[i-1];
		for(i=0;i<=n;i++)
		dp[i]=-1;
		ll ans=n;
		for(i=n-1;i>=0;i--)
		func(i);
		for(i=0;i<n;i++)
		{
			ll x;
			if(i==0) x=dp[i];
			else
			x=dp[i]+cnt[i-1];
			ans=min(ans,x);
		}
		cout<<ans<<endl;
	}
}