#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;
vector<string> s;
ll dp[16][105];
ll func(ll i,ll j)
{
	if(i<0) return 0;
	if(i==0)
	{
		if(j==0)
		{
			ll k;
			for(k=m-1;k>=0;k--)
			if(s[i][k]=='1') break;
			return k;
		}
		else
		{
			ll k;
			for(k=0;k<m;k++)
			if(s[i][k]=='1') break;
			return m-1-k;
		}
	}
	if(dp[i][j]!=-1) return dp[i][j];
	ll ret=99999999999;
	if(j==0)
	{
		ll pos=0;
		for(ll k=0;k<m;k++)
		{
			if(s[i][k]=='1') pos=k;
		}
		ret=1+min(2*pos+func(i-1,0),m-1+func(i-1,1));
	}
	else
	{
		ll pos=m-1;
		for(ll k=m-1;k>=0;k--)
		{
			if(s[i][k]=='1') pos=k;
		}
		pos=m-1-pos;
		ret=1+min(2*pos+func(i-1,1),m-1+func(i-1,0));
	}
	return dp[i][j]=ret;
}
int main()
{
	ll i,j,k;
	cin>>n>>m;
	m+=2;
	string str,s1;
	for(i=0;i<m;i++)
	str+='0';
	bool flag=false;
	for(i=0;i<n;i++)
	{
		cin>>s1;
		if(flag) s.push_back(s1);
		else
		{
			if(s1!=str)
			{
				flag=true;
				s.push_back(s1);
			}
		}
	}
	for(i=0;i<16;i++)
	{
		for(j=0;j<105;j++)
		dp[i][j]=-1;
	}
	n=s.size();
	cout<<func(n-1,0);
}