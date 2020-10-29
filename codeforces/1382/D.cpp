#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> v;
ll n;
ll dp[4001][2001];

ll isPossible(ll ind,ll sum)
{
	if(sum>n) return 0;
	if(sum==n) return 1;
	if(ind==v.size()) return 0;
	if(dp[ind][sum]!=-1) return dp[ind][sum];
	ll ret=0;
	ret|=isPossible(ind+1,sum);
	ret|=isPossible(ind+1,sum+v[ind]);
	return dp[ind][sum]=ret;
}

int main()
{
	ll i,j,k,m,t;
	cin>>t;
	while(t--)
	{
		v.clear();
		cin>>n;
		ll ar[2*n];
		for(i=0;i<2*n;i++)
		cin>>ar[i];
		for(i=0;i<2*n;)
		{
			j=ar[i];
			ll ctr=0;
			while(i<2*n and ar[i]<=j)
			{
				ctr++;
				i++;
			}
			v.push_back(ctr);
		}
		for(i=0;i<=v.size();i++)
		{
			for(j=0;j<=n;j++)
			dp[i][j]=-1;
		}
		ll ans=isPossible(0,0);
		if(ans==1)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}