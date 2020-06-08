#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
ll dp[1001][2001][2][2];
ll mod=998244353;
ll fn(ll a,ll b,ll c,ll d)
{
	if(a==0 and b==0 and c==0 and d==0)
	return 0;
	else if(a==0 and b==0 and c==0 and d==1)
	return 1;
	else if(a==0 and b==0 and c==1 and d==0)
	return 1;
	else if(a==0 and b==0 and c==1 and d==1)
	return 1;
	
	else if(a==1 and b==0 and c==0 and d==0)
	return 0;
	else if(a==1 and b==0 and c==0 and d==1)
	return 2;
	else if(a==1 and b==0 and c==1 and d==0)
	return 0;
	else if(a==1 and b==0 and c==1 and d==1)
	return 0;
	
	else if(a==0 and b==1 and c==0 and d==0)
	return 0;
	else if(a==0 and b==1 and c==0 and d==1)
	return 0;
	else if(a==0 and b==1 and c==1 and d==0)
	return 2;
	else if(a==0 and b==1 and c==1 and d==1)
	return 0;
	
	else if(a==1 and b==1 and c==0 and d==0)
	return 1;
	else if(a==1 and b==1 and c==0 and d==1)
	return 1;
	else if(a==1 and b==1 and c==1 and d==0)
	return 1;
	else if(a==1 and b==1 and c==1 and d==1)
	return 0;
}
ll func(ll ind,ll K,ll x,ll y)
{
	if(K>k) return 0;
	if(ind==n)
	{
		if(k==K)
		return 1;
		else return 0;
	}
	if(dp[ind][K][x][y]!=-1) return dp[ind][K][x][y];
	ll ret=0;
	ret=ret+func(ind+1,K+fn(x,y,0,0),0,0);
	ret%=mod;
	ret=ret+func(ind+1,K+fn(x,y,0,1),0,1);
	ret%=mod;
	ret=ret+func(ind+1,K+fn(x,y,1,0),1,0);
	ret%mod;
	ret=ret+func(ind+1,K+fn(x,y,1,1),1,1);
	ret%=mod;
	return dp[ind][K][x][y]=ret;
}
int main()
{
	ll i,j;
	cin>>n>>k;
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=2000;j++)
		dp[i][j][0][0]=dp[i][j][0][1]=dp[i][j][1][0]=dp[i][j][1][1]=-1;
	}
	cout<<(((func(1,1,0,0)+func(1,2,0,1))%mod+func(1,2,1,0))%mod+func(1,1,1,1))%mod;
}