#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		string s,str;
		cin>>s;
		ll l=s.length();
		if(l==1)
		{
			cout<<s<<endl;
			continue;
		}
		for(i=97;i<=122;i++)
		{
			bool flag=true;
			for(j=0;j<l;j++)
			{
				if(s[j]==i){
				if(j==l-1 or s[j]!=s[j+1])
				    flag=false;
				else
				    j++;
				}
			}
			if(!flag) str+=i;
		}
		bool flg=false;
		for(i=0;i<str.length();i++)
		if(str[i]==s[l-1])
		flg=true;
		if(!flg&&s[l-1]!=s[l-2])
		str+=s[l-1];
		sort(str.begin(),str.end());
		ll f[26]={0};
		for(i=0;i<str.length();i++)
		f[str[i]-97]++;
		for(i=0;i<26;i++)
		if(f[i]>0)
		cout<<(char)(i+97);
		cout<<endl;
	}
}