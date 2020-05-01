#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n];
		bool flag=true;
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			mp[ar[i]]++;
		}
		if(mp.size()>k)
		cout<<-1<<endl;
		else
		{
			ll ctr=1;
			while(mp.size()!=k)
			{
				mp[ctr++]++;
			}
			vector<ll> v,ans;
			for(auto x:mp)
			v.push_back(x.first);
			for(j=0;j<100;j++)
			{
				for(auto x:v)
				ans.push_back(x);
			}
			cout<<ans.size()<<endl;
			for(auto x:ans)
			cout<<x<<' ';
			cout<<endl;
		}
	}
}