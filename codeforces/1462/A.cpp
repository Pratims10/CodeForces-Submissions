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
		ll ar[n];
		vector<ll> v;
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll l=0,r=n-1;
		ll o=1;
		while(l<=r)
		{
			if(o==1)
			{
				v.push_back(ar[l++]);
			}
			else
			v.push_back(ar[r--]);
			o*=-1;
		}
		for(i=0;i<n;i++)
		cout<<v[i]<<' ';
		cout<<'\n';
	}
}