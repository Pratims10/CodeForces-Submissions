#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll l,i,j,k,m,n,t;
	cin>>n;
	vector<pair<ll,ll> > ar;
	for(i=0;i<n;i++)
	{
		cin>>j;
		ar.push_back(make_pair(j,i+1));
	}
	sort(ar.begin(),ar.end());
	ll ans=0,x=0;
	for(i=n-1;i>=0;i--)
	{
		ans+=x*ar[i].first+1;
		x++;
	}
	cout<<ans<<endl;
	for(i=n-1;i>=0;i--)
	cout<<ar[i].second<<' ';
}