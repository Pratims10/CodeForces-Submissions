#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
ll k,N;
ll dp[101][101][26];
map<pair<char,char>,ll> mp;
ll func(ll ind,ll k1,char ch)
{
	if(k1>k)
	return -9999999999;
	if(ind==N)
	return 0;
	
	if(dp[ind][k1][ch-97]!=-1)
	return dp[ind][k1][ch-97];
	ll ret=-99999999999;
	for(ll i=0;i<26;i++)
	{
		if(s[ind]==i+'a')
		ret=max(ret,func(ind+1,k1,i+'a') + mp[{ch,i+'a'}]);
		else
		ret=max(ret,func(ind+1,k1+1,i+'a') + mp[{ch,i+'a'}]);
//		if(ch=='o' and ind==5)
//		cout<<(char)(i+'a')<<' '<<ret<<' '<<k1<<endl;
	}
//	cout<<endl;
	dp[ind][k1][ch-97]=ret;
	//cout<<"ret= "<<ret<<endl;
	return ret;
}
int main()
{
	ll i,j,n;
	cin>>s;
	N=s.length();
	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			for(k=0;k<26;k++)
			dp[i][j][k]=-1;
		}
	}
	cin>>k>>n;
	for(i=0;i<n;i++)
	{
		char a,b;
		ll c;
		cin>>a>>b>>c;
		mp[{a,b}]=c;
	}
	ll ans=-9999999999;
	for(i=0;i<26;i++)
	{
		if(s[0]==i+'a')
		ans=max(ans,func(1,0,i+'a'));
		else ans=max(ans,func(1,1,i+'a'));
//		cout<<ans<<' ';
	}
	cout<<ans<<endl;
}