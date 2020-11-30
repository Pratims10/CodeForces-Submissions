#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,x;
ll dp[501][501];
ll ar[501];
ll func(ll ind,ll X)
{
	if(ind==n) return 0;
	if(dp[ind][X]!=-1) return dp[ind][X];
	ll ret=INT_MAX;
	if(ind==0 or ar[ind-1]<=ar[ind])
	ret=min(ret,func(ind+1,X));
	if(ar[ind]>X)
	{
		swap(ar[ind],X);
		if(ind==0 or ar[ind-1]<=ar[ind])
		ret=min(ret,1+func(ind+1,X));
		swap(ar[ind],X);
	}
	return dp[ind][X]=ret;
}
int main()
{
	ll i,j,k,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		for(i=0;i<n;i++)
		cin>>ar[i];
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=500;j++)
			dp[i][j]=-1;
		}
		ll ans=func(0,x);
		cout<<' ';
		if(ans==INT_MAX)
		cout<<-1;
		else cout<<ans;
		cout<<endl;
	}
}