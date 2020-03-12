#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	string s;
	cin>>s;
	ll l=s.length();
	n=l;
	ll a[l+1]={0},ar[l+1]={0};
	ll b[l+1]={0};
	if(s[0]=='a')
	a[0]=1;
	else b[0]=1;
	for(i=1;i<n;i++)
	{
		if(s[i]=='a')
		a[i]=a[i-1]+1;
		else a[i]=a[i-1];
		if(s[i]=='b')
		b[i]=b[i-1]+1;
		else b[i]=b[i-1];
	}
	if(s[n-1]=='a')
	ar[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		if(s[i]=='a')
		ar[i]=ar[i+1]+1;
		else ar[i]=ar[i+1];
	}
	ll ans=0;
	for(i=0;i<n;i++)
	{
		ans=max(ans,a[i]);
		for(j=i;j<n;j++)
		{
			ll len=a[i]+b[j]+ar[j+1];
			if(i>0)
			len-=b[i-1];
			ans=max(ans,len);
		}
	}
//	if(s=="b")
///	ans=1;
	cout<<ans;
}