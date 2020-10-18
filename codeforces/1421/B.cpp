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
		string s[n];
		for(i=0;i<n;i++)
		cin>>s[i];
		ll ans=0;
		vector<pair<ll,ll> > v;
		if(s[0][1]!='0')
		ans++,v.push_back({0,1});
		if(s[1][0]!='0')
		ans++,v.push_back({1,0});
		if(s[0][2]!='1')
		ans++,v.push_back({0,2});
		if(s[1][1]!='1')
		ans++,v.push_back({1,1});
		if(s[2][0]!='1')
		ans++,v.push_back({2,0});
		if(ans<=2)
		{
			cout<<ans<<endl;
			for(auto x:v)
			cout<<x.first+1<<' '<<x.second+1<<endl;
		}
		else
		{
			ans=0;
			v.clear();
			if(s[0][1]!='1')
			ans++,v.push_back({0,1});
			if(s[1][0]!='1')
			ans++,v.push_back({1,0});
			if(s[0][2]!='0')
			ans++,v.push_back({0,2});
			if(s[1][1]!='0')
			ans++,v.push_back({1,1});
			if(s[2][0]!='0')
			ans++,v.push_back({2,0});
			if(ans<=2)
			{
				cout<<ans<<endl;
				for(auto x:v)
				cout<<x.first+1<<' '<<x.second+1<<endl;
			}
		}
	}
}