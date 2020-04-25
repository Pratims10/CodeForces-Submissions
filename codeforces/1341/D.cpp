#include<bits/stdc++.h>
using namespace std;
#define ll int
ll n,K;
string s[2001],ans;
string s1[10]={"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
ll dp[2001][2001][11];
ll cnt[2001][10];
ll count(string a,string b)
{
	ll ctr=0;
	for(ll i=0;i<7;i++)
	if(a[i]=='1' and b[i]=='0')
	return -1;
	else if(a[i]=='0' and b[i]=='1')ctr++;
	//cout<<a<<' '<<b<<' '<<ctr<<endl;
	return ctr;
}
ll func(ll ind,ll k,ll dig)
{
	if(ind==n)
	{
		if(k==K)
		return dp[ind][k][dig]=1;
		else return dp[ind][k][dig]=0;
	}
	if(dp[ind][k][dig]!=-1)
	return dp[ind][k][dig];
	ll ret=0;
	for(ll i=0;i<=9;i++)
	{
		ll x=cnt[ind][i];
		if(x!=-1 and k+x<=K)
		ret=max(ret,func(ind+1,k+x,i));
	}
	return dp[ind][k][dig]=ret;
}
void back(ll ind,ll k,ll dig)
{
	if(ind==n+1)
	return;
	for(ll i=9;i>=0;i--)
	{
		ll x=cnt[ind][i];
		if(dp[ind+1][k+x][i]==1)
		{
			ans+=(char)(i+'0');
			back(ind+1,k+x,i);
			return;
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,t;
	cin>>n>>K;
	for(i=0;i<n;i++)
	cin>>s[i];
	for(i=0;i<=2000;i++)
	{
		for(j=0;j<=2000;j++)
		{
			for(k=0;k<=10;k++)
			dp[i][j][k]=-1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=9;j++)
		cnt[i][j]=count(s[i],s1[j]);
	}
	ll x=func(0,0,0);
	if(x==0)
	cout<<-1;
	else{
		back(0,0,0);
		cout<<ans;
	}
}