#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b;
	t=1;
	while(t--)
	{
		cin>>a>>b;
		vector<ll> v;
		v.push_back(b);
		while(b>a)
		{
			ll x=b%10;
			if(x%2==1)
			{
				if(x!=1)
				{
					cout<<"NO";
					return 0;
				}
				b=b-1;
				b/=10;
				v.push_back(b);
			}
			else
			{
				b/=2;
				v.push_back(b);
			}
		}
		if(b==a)
		{
			reverse(v.begin(),v.end());
			cout<<"YES\n";
			cout<<v.size()<<'\n';
			for(auto x:v)
			cout<<x<<' ';
		}
		else
		{
			cout<<"NO\n";
		}
	}
}