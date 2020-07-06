#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	string s[n];
	vector<pair<ll,ll>> v;
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<n;i++)
	{
		bool fl=false;
		for(j=0;j<n;j++)
		if(s[i][j]=='.')
		{
			v.push_back({i,j});
			break;
		}
	}
	if(v.size()==n)
	{
		for(auto x:v)
		cout<<x.first+1<<' '<<x.second+1<<endl;
		return 0;
	}
	v.clear();
	for(i=0;i<n;i++)
	{
		bool fl=false;
		for(j=0;j<n;j++)
		if(s[j][i]=='.')
		{
			v.push_back({j,i});
			break;
		}
	}
	if(v.size()==n)
	{
		for(auto x:v)
		cout<<x.first+1<<' '<<x.second+1<<endl;
		return 0;
	}
	cout<<-1;
}