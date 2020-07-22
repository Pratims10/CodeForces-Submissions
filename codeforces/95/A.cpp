#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<string,ll> mp;
bool check(string s)
{
	for(ll i=0;i<s.length();i++)
	if(s[i]<=90) s[i]=(char)(s[i]+32);
	if(mp[s]) return true;
	else return false;
}
int main()
{
	ll i,j,k,m,n,t;
	string s1,s2;
	cin>>n;
	string s;
	char ch;
	for(i=0;i<n;i++)
	{
		cin>>s;
		for(j=0;j<s.length();j++)
		if(s[j]>=65 and s[j]<=90)
		s[j]=(char)(s[j]+32);
		mp[s]=1;
	}
	cin>>s;
	cin>>ch;
	n=s.length();
	ll ar[n]={0};
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			string s2;
			for(k=i;k<=j;k++)
			{
				s2+=s[k];
			}
			if(check(s2))
			{
				for(k=i;k<=j;k++)
				ar[k]=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(ar[i])
		{
			//cout<<i<<' ';
			if(s[i]==ch or s[i]==(char)(ch-32))
			{
				if(ch=='a')
				{
					if(s[i]<=90)
					s[i]='B';
					else s[i]='b';
				}
				else
				{
					if(s[i]<=90)
					s[i]='A';
					else s[i]='a';
				}
			}
			else
			{
				if(s[i]<=90)
				s[i]=(char)(ch-32);
				else s[i]=ch;
			}
		}
	}
	cout<<s;
}