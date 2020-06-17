#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>m>>k;
	ll K=k;
	ll p=-1;
	vector<pair<ll,ll>> v;
	for(i=0;i<n;i++)
	{
		if(p==1)
		{
			for(j=m-1;j>=0;j--)
			v.push_back({i+1,j+1});
		}
		else
		{
			for(j=0;j<m;j++)
			v.push_back({i+1,j+1});
		}
		p*=-1;
	}
	for(i=0;i<n*m;i+=2)
	{
		if(k==1) break;
		cout<<2<<' '<<v[i].first<<" "<<v[i].second<<" "<<v[i+1].first<<' '<<v[i+1].second<<endl;
		k--;
	}
	cout<<n*m-2*(K-1)<<' ';
	for(;i<n*m;i++)
	cout<<v[i].first<<' '<<v[i].second<<' ';
}