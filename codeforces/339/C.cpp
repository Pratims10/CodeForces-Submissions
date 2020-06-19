#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string str;
ll n,dp[1001][21][11];
ll ar[1001];
ll func(ll ind,ll diff,ll prv)
{
	if(ind==n)
	{
		cout<<"YES\n";
		for(ll i=0;i<n;i++) cout<<ar[i]<<' ';
		exit(0);
	}
	if(dp[ind][diff][prv]!=-1) return dp[ind][diff][prv];
	ll mx=0;
	for(ll i=0;i<10;i++)
	{
		if(str[i]=='1' and i+1!=prv and i+1-diff>0)
		{
			ar[ind]=i+1;
			mx=max(mx,func(ind+1,i+1-diff,i+1));
		}
	}
	return dp[ind][diff][prv]=mx;
}
vector<ll> ans;
void printop(ll ind,ll diff,ll prv)
{
	if(ind==n) return;
	for(ll i=0;i<10;i++)
	{
		if(dp[ind+1][i+1-diff][i+1]==1)
		{
			ans.push_back(i+1);
			printop(ind+1,i+1-diff,i+1);
			break;
		}
	}
}
int main()
{
	ll i,j,k,m;
	cin>>str;
	cin>>n;
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=20;j++){
			for(k=0;k<=10;k++)
			dp[i][j][k]=-1;
		}
	}
	ll x=func(0,0,0);
	cout<<"NO\n";
}