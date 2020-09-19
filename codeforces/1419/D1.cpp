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
	sort(ar,ar+n);
	ll l=0,r=n-1;
	ll p=1;
	vector<ll> v;
	while(l<=r)
	{
		if(p==1)
		{
			v.push_back(ar[r--]);
		}
		else
		v.push_back(ar[l++]);
		p*=-1;
	}
	ll ctr=0;
	for(i=1;i<n-1;i++)
	{
		if(v[i]<v[i-1] and v[i]<v[i+1])
		ctr++;
	}
	cout<<ctr<<endl;
	for(auto x:v)
	cout<<x<<' ';
}