#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srt(pair<pair<ll,ll>,ll> a,pair<pair<ll,ll>,ll> b)
{
	if(a.first.first==b.first.first) return a.first.second<b.first.second;
	return a.first.first<b.first.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,n,t;
	cin>>n;
	vector<pair<pair<ll,ll>,ll>> v;
	vector<ll> ans;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		v.push_back({{j,k},i+1});
	}
	sort(v.begin(),v.end(),srt);
	for(i=0;i<n;i++)
	{
		vector<pair<pair<ll,ll>,ll>> v2;
		for(j=0;j<n;j++)
		if(i!=j) v2.push_back(v[j]);
		bool flag=true;
		for(j=1;j<n-1;j++)
		if(v2[j].first.first<v2[j-1].first.second) flag=false;
		if(flag) ans.push_back(v[i].second);
	}
	cout<<ans.size()<<endl;
	sort(ans.begin(),ans.end());
	for(auto x:ans)
	cout<<x<<' ';
}