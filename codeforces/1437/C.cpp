#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
ll ar[201];
ll dp[201][405];
ll func(ll ind,ll t)
{
	if(ind==n) return 0;
	if(t==2*n+1) return INT_MAX;
	if(dp[ind][t]!=-1) return dp[ind][t];
	ll ret=func(ind,t+1);
	ret=min(ret,abs(t-ar[ind])+func(ind+1,t+1));
	return dp[ind][t]=ret;
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
		sort(ar,ar+n);
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=2*n;j++)
			dp[i][j]=-1;
		}
		cout<<func(0,1)<<'\n';
	}
}