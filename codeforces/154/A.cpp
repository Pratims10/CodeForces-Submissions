#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll l,r,i,j,k,n;
	string s;
	cin>>s;
	l=s.length();
	cin>>n;
	ll ans=0;
	map<pair<char,char>,ll> mp;
	for(i=0;i<n;i++)
	{
		string s1;
		cin>>s1;
		char c1=s1[0],c2=s1[1];
		for(j=0;j<l;)
		{
			ll ctr1=0,ctr2=0;
			while(j<l and s[j]==c1 or s[j]==c2)
			{
				if(s[j]==c1) ctr1++;
				else ctr2++;
				j++;
			}
			ans+=min(ctr1,ctr2);
			if(ctr1==0 and ctr2==0) j++;
		}
	}
	cout<<ans;
}