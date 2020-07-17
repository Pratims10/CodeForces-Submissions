#include<bits/stdc++.h>
using namespace std;
#define ll int
string s;
ll n,p;
ll dp[131073][26];
ll f[131073][26];
ll power[20];
ll val(ll l,ll r,ll ch)
{
	if(l==0)
	return f[r][ch];
	else return f[r][ch]-f[l-1][ch];
}
ll leng(ll l,ll r)
{
	return r-l+1;
}
ll func(ll ind,ll ch)
{
	ll deg=p-ch;
	if(deg==0)
	{
		if(s[ind]==(char)(ch+'a'))
		return 0;
		else return 1;
	}
	if(dp[ind][ch]!=-1) return dp[ind][ch];
	ll r=ind+power[deg]-1;
	ll ret=INT_MAX;
	ll len=r+1-ind;
	ll mid=(ind+r)/2;
	//cout<<ind<<' '<<r<<' '<<mid<<endl;
	ret=min(ret,func(ind,ch+1)+leng(mid+1,r)-val(mid+1,r,ch));
	ret=min(ret,func(mid+1,ch+1)+leng(ind,mid)-val(ind,mid,ch));
	return dp[ind][ch]=ret;
}
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	power[0]=1;
	for(i=1;i<20;i++)
	power[i]=power[i-1]*2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		for(i=0;i<26;i++)
		f[0][i]=0;
		f[0][s[0]-'a']++;
		for(i=1;i<n;i++)
		{
			for(j=0;j<26;j++)
			f[i][j]=f[i-1][j];
			f[i][s[i]-'a']++;
		}
		for(i=0;i<n;i++)
		{
			{
				for(k=0;k<26;k++)
				dp[i][k]=-1;
			}
		}
		for(i=0;i<20;i++)
		if(power[i]==n) break;
		p=i;
	//	cout<<"p="<<p<<'\n';
		cout<<func(0,0)<<'\n';
	}
}