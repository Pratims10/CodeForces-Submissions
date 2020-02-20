#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	string s;
	cin>>s;
	n=s.length();
	ll l=0,r=n-1;
	ll c[n]={0},b[n]={0};
	if(s[0]>=97)
	b[0]=1;
	for(i=1;i<n;i++)
	if(s[i]>=97)
	b[i]+=b[i-1]+1;
	else b[i]=b[i-1];
	for(i=n-2;i>=0;i--)
	{
		if(s[i+1]<=90)
		c[i]=c[i+1]+1;
		else c[i]=c[i+1];
	}
	ll ans=100000000;
	for(i=0;i<n;i++)
	{
//		cout<<b[i]<<' '<<c[i]<<endl;
		ans=min(ans,b[i]+c[i]);
	}
	ans=min(ans,c[0]);
	if(b[n-1]==n)
	ans=0;
	cout<<ans<<endl;
}