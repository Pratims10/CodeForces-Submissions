#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
vector<ll> prime(ll n)
{
	ll x=n;
	vector<ll> v;
	if(n==2) return v;
	while(n%2==0)
	{
		if(x!=2) v.pb(2);
		n/=2;
	}
	for(ll i=3;i*i<=n;i+=2)
	{
		while(n%i==0)
		if(i!=x) v.pb(i),n/=i;
	}
	if(n>2 and n!=x) v.push_back(n);
	return v;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	vector<ll> v=prime(n);
	if(v.size()==0) cout<<"1\n0";
	else if(v.size()==1) cout<<"2";
	else
	{
		if(v[0]*v[1]==n) cout<<2;
		else
		cout<<"1\n"<<v[0]*v[1];
	}
}