#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[101][101][11][11];
ll mod=100000000;
ll k1,k2,n1,n2;
ll func(ll i1,ll i2,ll k11,ll k22)
{
	if(k11>k1)
	{
//		cout<<str<<" 0a\n";
		return 0;
	}
	if(k22>k2)
	{
//		cout<<str<<" 0b\n";
		return 0;
	}
	if(i1==n1 && i2==n2)
	{
//		cout<<str<<" 1\n";
		return 1;
	}
	if(i1>n1 || i2>n2)
	{
//		cout<<str<<" 0c\n";
		return 0;
	}
	ll res;
	if(dp[i1][i2][k11][k22]==-1)
	{
		res=(func(i1+1,i2,k11+1,0)%mod+func(i1,i2+1,0,k22+1)%mod)%mod;
		dp[i1][i2][k11][k22]=res;
	}
	return dp[i1][i2][k11][k22];
}
int main()
{
	ll i,j,k,m,t;
	cin>>n1>>n2>>k1>>k2;
	memset(dp,-1,sizeof(dp));
	cout<<func(0,0,0,0);
}