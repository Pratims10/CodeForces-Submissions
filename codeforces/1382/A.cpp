#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		{
			cin>>j;
			mp[j]++;
		}
		bool flag=true;
		for(i=0;i<m;i++)
		{
			cin>>j;
			if(flag and mp[j])
			{
				cout<<"YES\n";
				cout<<"1 "<<j<<endl;
				flag=false;
			}
		}
		if(flag)
		cout<<"NO\n";
	}
}