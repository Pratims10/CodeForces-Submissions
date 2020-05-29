#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[2001][2001][2],n,m,N;
ll mod=1000000007;
string s;
ll func(ll ind,ll sum,ll tight)
{
	if(ind==N){
		return sum==0;
	}
	if(dp[ind][sum][tight]!=-1) return dp[ind][sum][tight];
	ll ret=0;
	int bound;
	if(tight) bound=s[ind]-'0';
	else bound=9;
	if(ind%2==1)
	{
		if(m<=bound)
		{
			ll ret;
			if(m==bound and tight ) ret=func(ind+1,(sum*10+m)%n,1);
			else ret=func(ind+1,(sum*10+m)%n,0);
			return dp[ind][sum][tight]=ret;
		}
		else return 0;
	}
	if(tight)
	{
		for(int i=0;i<=bound;i++)
		{
			if(ind%2==0 and i==m) continue;
			if(i==bound)
			ret=(ret+func(ind+1,(sum*10+i)%n,1)%mod)%mod;
			else ret=(ret+func(ind+1,(sum*10+i)%n,0)%mod)%mod;
		}
	}
	else
	{
		for(int i=0;i<=9;i++)
		{
			if(ind%2==0 and i==m) continue;
			ret=(ret+func(ind+1,(sum*10+i)%n,0)%mod)%mod;
		}
	}
	return dp[ind][sum][tight]=ret;
}
ll sod(string s)
{
	ll ret=0;
	for(int i=0;i<s.length();i++)
	{
		if(i%2==1 and s[i]-'0'!=m) return 0;
		if(i%2==0 and s[i]-'0'==m) return 0;
		ret=(ret*10+(s[i]-'0'))%n;
	}
	return ret==0;
}
int main()
{
	ll i,j,k,t;
	cin>>n>>m;
	cin>>s;
	N=s.length();
	string s1=s;
	for(i=0;i<=2000;i++)
	{
		for(j=0;j<=2000;j++)
		dp[i][j][0]=dp[i][j][1]=-1;
	}
	ll ans=func(0,0,1);
	cin>>s;
	N=s.length();
	for(i=0;i<=2000;i++)
	{
		for(j=0;j<=2000;j++)
		dp[i][j][0]=dp[i][j][1]=-1;
	}
	ans=func(0,0,1)-ans;
	if(ans<0) ans+=mod;
	else ans%=mod;
	//cout<<ans<<' ';
	ans+=sod(s1);
	cout<<ans%mod<<endl;
}