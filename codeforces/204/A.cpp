#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;
ll n;
ll dp[20][10][2];
vector<ll> v;
ll func(ll ind,ll first,ll tight)
{
	if(ind==n-1)
	{
		//cout<<first<<" ";
		ll bound=9;
		if(tight) bound=v[ind];
		//cout<<bound<<endl;
		if(first==0) return bound;
		if(first<=bound)
		return 1;
		else return 0;
	}
	if(dp[ind][first][tight]!=-1) return dp[ind][first][tight];
	ll bound=9;
	if(tight) bound=v[ind];
	ll ret=0;
	for(ll i=0;i<=bound;i++)
	{
		if(tight and i==bound)
		{
			if(first==0)
			ret+=func(ind+1,i,1);
			else ret+=func(ind+1,first,1);
		}
		else
		{
			if(first==0)
			ret+=func(ind+1,i,0);
			else ret+=func(ind+1,first,0);
		}
	}
	return dp[ind][first][tight]=ret;
}
ll calc(ll x)
{
	if(x==0) return 0;
	v.clear();
	ll a=x;
	while(x>0)
	{
		v.push_back(x%10);
		x/=10;
	}
	reverse(v.begin(),v.end());
	n=v.size();
	for(ll i=0;i<=19;i++)
	{
		for(ll j=0;j<=9;j++)
		dp[i][j][0]=dp[i][j][1]=-1;
	}
	ll ret=func(0,0,1);
	//cout<<a<<'\n';
	//if(a<=9) ret=ret+a-1;
	//else ret+=9;
	return ret;
}
int main()
{
	ll l,r;
	cin>>l>>r;
	cout<<calc(r)-calc(l-1);
}