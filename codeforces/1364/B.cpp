#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,x,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		vector<ll> v;
		v.push_back(ar[0]);
		for(i=1;i<n-1;i++)
		{
		    if(ar[i]<ar[i-1] and ar[i]<ar[i+1])
			v.push_back(ar[i]);
			if(ar[i]>ar[i-1] and ar[i]>ar[i+1])
			v.push_back(ar[i]);
		}
		v.push_back(ar[n-1]);
		cout<<v.size()<<endl;
		for(auto x:v) cout<<x<<' ';
		cout<<endl;
	}
}