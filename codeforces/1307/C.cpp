#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,d;
	t=1;
	while(t--)
	{
		string s;
		cin>>s;
		ll l=s.length();
		ll ar[l][26]={0};
		ar[0][s[0]-'a']=1;
		for(i=1;i<l;i++)
		{
			for(j=0;j<26;j++)
			ar[i][j]=ar[i-1][j];
			ar[i][s[i]-'a']++;
		}
		ll f[26]={0};
		for(i=0;i<l;i++)
		f[s[i]-'a']++;
		map<string,ll> mp;
//		cout<<"F";
		for(i=l-1;i>=1;i--)
		{
			for(j=0;j<26;j++)
			{
				string str;
				str+=s[i];
				str+=(char)(j+97);
				//cout<<str<<endl;
				mp[str]+=ar[i-1][j];
			}
		}
		ll ans=0;
		for(i=0;i<26;i++)
		{
			ans=max(ans,f[i]);
//			cout<<f[i]<<' ';
//			cout<<endl;
		}
		for(auto x: mp)
		{
			ans=max(ans,x.second);
		}
		cout<<ans<<endl;
	}
}