#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	string s;
	cin>>s;
	ll o[n]={0},z[n]={0};
	if(s[0]=='1')
	o[0]=1;
	else z[0]=1;
	for(i=1;i<n;i++)
	{
		if(s[i]=='1')
		{
			o[i]=o[i-1]+1;
			z[i]=z[i-1];
		}
		else
		{
			z[i]=z[i-1]+1;
			o[i]=o[i-1];
		}
	}
	map<ll,vector<ll> > mp;
	mp[0].push_back(-1);
	for(i=0;i<n;i++)
	{
		mp[o[i]-z[i]].push_back(i);
	}
	ll ans=0;
	for(auto x:mp)
	{
//		cout<<x.first<<"    "<<x.second[0]<<' '<<x.second[x.second.size()-1]<<endl;
		ans=max(ans,x.second[x.second.size()-1]-x.second[0]);
	}
	cout<<ans;
}