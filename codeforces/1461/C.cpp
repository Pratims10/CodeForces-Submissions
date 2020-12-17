#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	cout<<fixed<<setprecision(12);
	while(t--)
	{
		cin>>n>>m;
		ll ar[n];
		for(i=0;i<n;i++)
			cin>>ar[i];
		vector<pair<ll,ld>> v;
		for(i=0;i<m;i++)
		{
			ld x;
			cin>>j>>x;
			v.push_back({j, x});
		}
		bool sorted[n];
		if(ar[n-1]==n)
		sorted[n-1]=true;
		else sorted[n-1]=false;
		for(i=n-2;i>=0;i--)
		{
			if(sorted[i+1] and ar[i]==i+1)
				sorted[i]=true;
			else
				sorted[i]=false;
		}
		reverse(v.begin(), v.end());
		ld ans=0.0;
		if(sorted[0])
		ans=1.0;
		for(auto x:v)
		{
			ll pos=x.first-1;
			ld prob=x.second;
			if(pos==n-1 or sorted[pos+1])
			{
				//cout<<pos<<' '<<ans<<'\n';
				ans=prob+ans*(1.0-prob);
			}
		}
		cout<<ans<<'\n';
	}
}