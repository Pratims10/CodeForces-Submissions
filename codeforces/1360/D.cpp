#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,t,i,j,k,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector<ll> v;
		for(i=sqrt(n);i>=1;i--)
		{
			if(n%i==0)
			{
				if(n/i==i) v.push_back(i);
				else{
					v.push_back(i);
					v.push_back(n/i);
				}
			}
		}
		sort(v.begin(),v.end());
		for(i=v.size()-1;i>=0;i--)
		{
			if(v[i]<=k)
			{
				ll ans=n/v[i];
				cout<<ans<<endl;
				break;
			}
		}
	}
}