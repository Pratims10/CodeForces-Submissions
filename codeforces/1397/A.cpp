#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll f[26]={0};
		string s;
		for(i=0;i<n;i++)
		{
			cin>>s;
			for(auto x:s)
			f[x-'a']++;
		}
		bool fl=true;
		for(i=0;i<26;i++)
		if(f[i]%n!=0) fl=false;
		if(fl)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}