#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	set<ll> s,st;
	for(i=0;i<n;i++)
	{
		set<ll> st1;
		st1.insert(ar[i]);
		for(auto x:st)
		st1.insert(x|ar[i]);
		st=st1;
		for(auto x:st1)
		s.insert(x);
	}
	cout<<s.size();
}