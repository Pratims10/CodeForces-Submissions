#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	map<ll,ll> mp,mp2;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		mp[ar[i]]++;
	}
	vector<ll> v;
	ll ctr=0;
	for(i=0;i<n;i++)
	{
		bool fl=false;
		if(i>0 and ar[i]!=ar[i-1])
		{
			if(!mp2[ar[i]]) {
				mp[ar[i-1]]++;
				v.push_back(ar[i-1]);
				fl=true;
				continue;
		}
		}
		if(!mp[ctr] and !mp2[ctr])
		{
			mp2[ctr]=1;
			v.push_back(ctr++);
			fl=true;
		}
		if(!fl)
		{
			ctr++;
			i--;
		}
	}
	for(i=0;i<n;i++)
	cout<<v[i]<<' ';
}