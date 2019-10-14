#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll sq=0,size=0;
	vector<ll> v,sqr;
	for(i=0;i<n;i++)
	{
		cin>>j;
		k=sqrt(j);
		if(k*k==j)
		{
			sqr.push_back(j);
			sq++;
		}
		else
		{
			m=min(j-k*k,(k+1)*(k+1)-j);
			v.push_back(m);
		}
	}
	if(sq>=n/2)
	{
		sort(sqr.begin(),sqr.end());
		ll ans=0;
		size=sqr.size()-1;
		while(sq!=n/2)
		{
			if(sqr[size]==0)
			ans+=2;
			else ans++;
			size--;
			sq--;
		}
		cout<<ans;
	}
	else
	{
		sort(v.begin(),v.end());
		i=0;
		ll ans=0;
		while(sq<n/2)
		{
			ans+=v[i];
			i++;
			sq++;
		}
		cout<<ans;
	}
}