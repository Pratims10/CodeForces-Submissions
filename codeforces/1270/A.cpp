
// Problem : A. Card Game
// Contest : Codeforces - Good Bye 2019
// URL : https://codeforces.com/contest/1270/problem/A
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
		ll a,b;
		cin>>n>>a>>b;
		bool flag=false;
		for(i=0;i<a;i++)
		{
			cin>>j;
			if(j==n)
			flag=true;
		}
		for(i=0;i<b;i++)
		cin>>j;
		if(flag)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}