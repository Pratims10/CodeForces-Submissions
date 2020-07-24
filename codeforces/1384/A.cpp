
// Problem : A. Common Prefixes
// Contest : Codeforces - Codeforces Round #659 (Div. 2)
// URL : https://codeforces.com/contest/1384/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		string s;
		for(i=0;i<200;i++)
		s+='a';
		cout<<s<<'\n';
		for(i=0;i<n;i++)
		{
			string s2;
			for(j=0;j<ar[i];j++)
			s2+=s[j];
			ll ch;
			for(j=97;j<=122;j++)
			if(j!=s[ar[i]]) ch=j;
			for(;j<200;j++)
			s2+=(char)(ch);
			ch++;
			s=s2;
			cout<<s2<<endl;
		}
	}
}