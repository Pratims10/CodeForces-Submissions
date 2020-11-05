#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	ll ar[26];
	for(i=0;i<26;i++)
	cin>>ar[i];
	string str;
	cin>>str;
	n=str.length();
	ll ctr=0;
	for(i=97;i<=122;i++)
	{
		ll s=0;
		map<ll,ll> mp;
		for(j=0;j<n;j++)
		{
			if(str[j]==i)
			ctr+=mp[s];
			s+=ar[str[j]-'a'];
			if(str[j]==i)
			mp[s]++;
		}
	}
	cout<<ctr;
}