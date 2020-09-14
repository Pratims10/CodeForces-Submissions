#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[200001];
ll ar[200001];
ll n;
ll func(ll ind)
{
	if(ind>=n)
	return 0;
	if(dp[ind]!=-1)
	return dp[ind];
	ll ret=LLONG_MAX;
	{
		ret=min(ret,ar[ind]+func(ind+2));
		ret=min(ret,ar[ind]+func(ind+3));
		ret=min(ret,ar[ind]+ar[ind+1]+func(ind+3));
		ret=min(ret,ar[ind]+ar[ind+1]+func(ind+4));
	}
	return dp[ind]=ret;
}
int main()
{
	ll i,j,k,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		cin>>ar[i];
		for(i=0;i<=n;i++)
		{
			dp[i]=-1;
		}
		cout<<func(0)<<endl;
	}
}