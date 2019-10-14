#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll ar[n];
	vector<pair<ll,ll> > v;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>j;
		v.push_back({j,i});
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)
	ar[i]=v[ar[i]-1].second;
	ll ctr=0;
	bool flag=false;
	for(i=0;i<n-1;i++)
	if(ar[i+1]<ar[i])
	break;
	else
	{
		flag=true;
		ctr++;
	}
	ctr++;
	cout<<n-ctr<<endl;
}