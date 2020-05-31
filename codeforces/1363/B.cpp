#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.length();
		if(n==1){
			cout<<0<<endl;
			continue;
		}
		ll z[n]={0},o[n]={0};
		if(s[0]=='1') z[0]=1;
		for(i=1;i<n;i++)
		{
			if(s[i]=='1') z[i]=z[i-1]+1;
			else z[i]=z[i-1];
		}
		if(s[n-1]=='0') o[n-1]=1;
		for(i=n-2;i>=0;i--)
		{
			if(s[i]=='0') o[i]=o[i+1]+1;
			else o[i]=o[i+1];
		}
		ll ans=999999999;
		for(i=0;i<n-1;i++)
		{
			ans=min(ans,z[i]+o[i+1]);
		}
		ans=min(ans,z[n-2]);
		//1111111000000
		for(i=0;i<n;i++)
		{
			z[i]=o[i]=0;
		}
		if(s[0]=='0') z[0]=1;
		for(i=1;i<n;i++)
		{
			if(s[i]=='0') z[i]=z[i-1]+1;
			else z[i]=z[i-1];
		}
		if(s[n-1]=='1') o[n-1]=1;
		for(i=n-2;i>=0;i--)
		{
			if(s[i]=='1') o[i]=o[i+1]+1;
			else o[i]=o[i+1];
		}
		for(i=0;i<n-1;i++)
		{
			ans=min(ans,z[i]+o[i+1]);
		}
		ans=min(ans,z[n-2]);
		cout<<ans<<endl;
	}
}