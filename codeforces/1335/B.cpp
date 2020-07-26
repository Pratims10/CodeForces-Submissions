
// Problem : B. Construct the String
// Contest : Codeforces - Codeforces Round #634 (Div. 3)
// URL : https://codeforces.com/contest/1335/problem/B
// Memory Limit : 256 MB
// Time Limit : 2000 ms
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
		ll a,b;
		char ch='a';
		cin>>n>>a>>b;
		i=0;
		string str;
		while(i<n)
		{
			str+=ch;
			ch=ch+1;
			if(ch-97==b)
			ch='a';
			i++;
		}
		cout<<str<<endl;
	}
}