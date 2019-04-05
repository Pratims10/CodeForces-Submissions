#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		ll l=s.length();
		ll f[26]={0};
		for(i=0;i<l;i++)
		f[(int)(s[i]-97)]++;
		bool flag=true;
		ll ctr=0;
		for(i=0;i<26;i++)
		{
			if(f[i]>1)
			flag=false;
			if(f[i]==1&&ctr==0)
			ctr=1;
			if(f[i]==0&&ctr==1)
			ctr=2;
			if(f[i]==1&&ctr==2)
			ctr=3;
			if(ctr==3)
			flag=false;
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}