
// Problem : C. Make Good
// Contest : Codeforces - Good Bye 2019
// URL : https://codeforces.com/contest/1270/problem/C
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void print(vector<ll> v)
{
	cout<<v.size()<<endl;
	for(auto x:v)
	cout<<x<<' ';
	cout<<endl;
}
int main()
{
	ll i,j,k,m,n,t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		ll s=0,x=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			s+=ar[i];
			x^=ar[i];
		}
		vector<ll> v;
		if(s%2==1)
		{
			v.push_back(1);
			s++;
			x^=1;
		}
		if(x*2==s)
		{
			
		}
		else if(x*2<s)
		{
			if(x!=0)
			v.push_back(x);
			v.push_back(s+x);
		}
		else
		{
			ll diff=x*2-s;
			v.push_back(diff/2);
			v.push_back(diff/2);
		}
		print(v);
	}
}