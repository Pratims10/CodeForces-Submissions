#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,i,j,k,m,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll ar[n];
		ll ans=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			ans+=2*ar[i];
		}
		if(m<n||n==2)
		{
			cout<<-1<<endl;
			continue;
		}
		vector<pair<ll,ll> > v;
		ll mn=9999999;
		ll mi,mj;
		for(i=0;i<n;i++)
		{
			v.push_back({ar[i],i+1});
		}
		sort(v.begin(),v.end());
		mn=v[0].first+v[1].first;
		mi=v[0].second;
		mj=v[1].second;
		cout<<ans+mn*(m-n)<<endl;
		for(i=1;i<n;i++)
		{
			cout<<i<<' '<<i+1<<endl;
		}
		cout<<n<<' '<<1<<endl;
		m-=n;
		for(i=0;i<m;i++)
		cout<<mi+1<<' '<<mj+1<<endl;
	}
}