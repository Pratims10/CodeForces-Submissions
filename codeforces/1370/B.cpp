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
		ll ar[2*n];
		for(i=0;i<2*n;i++)
		cin>>ar[i];
		vector<pair<ll,ll> > o,e;
		for(i=0;i<2*n;i++)
		if(ar[i]%2==1) o.push_back({ar[i],i});
		else e.push_back({ar[i],i});
		vector<ll> ans;
		ll ctr=0;
		for(i=0;i<o.size()-1;i+=2)
		{
			//cout<<i<<"s";
			if(i+1>=o.size()) break;
			cout<<o[i].second+1<<' '<<o[i+1].second+1<<endl;
			ctr++;
			if(ctr==n-1) break;
		}
		//cout<<ctr<<endl;
		if(ctr<n-1)
		for(i=0;i<e.size()-1;i+=2)
		{
			if(i+1>=e.size()) break;
			ctr++;
			cout<<e[i].second+1<<' '<<e[i+1].second+1<<endl;
			if(ctr==n-1) break;
		}
	}
}