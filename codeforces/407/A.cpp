#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	map<ll,vector<pair<ll,ll>>> mp;
	for(i=1;i<=1000;i++)
	{
		for(j=1;j<=1000;j++)
		mp[i*i+j*j].push_back({i,j});
	}
	cin>>a>>b;
	c=a*a+b*b;
	for(auto x:mp[a*a])
	{
		for(auto y:mp[b*b])
		{
			i=x.first+y.first;
			j=x.second-y.second;
			//cout<<x.first<<' '<<x.second<<' ';
			//cout<<y.first<<' '<<y.second<<endl;
			if(i*i+j*j==c and j!=0 and i!=0)
			{
				cout<<"YES\n0 0\n";
				cout<<x.first<<' '<<x.second<<endl;
				cout<<-1*y.first<<' '<<y.second<<endl;
				return 0;
			}
		}
	}
	cout<<"NO";
}