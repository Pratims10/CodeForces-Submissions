#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool check(string s[],ll n,string str)
{
	for(ll i=0;i<n;i++)
	{
		ll ctr=0;
		for(ll j=0;j<str.length();j++)
		{
			if(str[j]!=s[i][j]) ctr++;
		}
		if(ctr>1) return false;
	}
	return true;
}
int main()
{
	ll a,b,t,i,j,k,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		string s[n];
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		bool flag=false;
		for(i=0;i<m;i++)
		{
			for(char ch='a';ch<='z';ch++)
			{
				string s1=s[0];
				s1[i]=ch;
				if(check(s,n,s1))
				{
					flag=true;
					cout<<s1<<endl;
					break;
				}
			}
			if(flag) break;
		}
		if(!flag) cout<<"-1\n";
	}
}