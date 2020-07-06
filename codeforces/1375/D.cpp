#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool sorted(ll ar[],ll n)
{
	for(ll i=0;i<n-1;i++)
	if(ar[i+1]<ar[i]) return false;
	return true;
}
ll mex(ll ar[],ll n)
{
	ll f[1005]={0};
	for(ll i=0;i<n;i++)
	f[ar[i]]++;
	for(ll i=0;i<=1004;i++)
	if(f[i]==0) return i;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<ll> ans;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		while(!sorted(ar,n))
		{
			//cout<<"S";
			ll x=mex(ar,n);
			if(x==n)
			{
				for(i=0;i<n;i++)
				if(ar[i]!=i)
				{
					ans.push_back(i+1);
					ar[i]=x;
					break;
				}
			}
			else
			{
				ans.push_back(x+1);
				ar[x]=x;
			}
		}
		cout<<ans.size()<<endl;
		for(auto x:ans)
		cout<<x<<' ';
		cout<<endl;
	}
}