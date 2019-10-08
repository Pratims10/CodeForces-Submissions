#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,r;
	cin>>t;
	while(t--)
	{
		cin>>n>>r;
		ll ar[n],o=0;
		for(i=0;i<n;i++)
		cin>>ar[i];
		sort(ar,ar+n);
		ll size=n-1;
		ll ctr=0;
		ll l=-1;
		deque<ll> dq;
		for(i=0;i<n;i++)
		dq.push_back(ar[i]);
		while(!dq.empty())
		{
			ctr++;
			o+=r;
			ll x=dq.back();
			while(!dq.empty()&&x==dq.back())
			{
			//	cout<<"S";
				dq.pop_back();
			}
			while(!dq.empty()&&dq.front()<=o)
			{//cout<<"q";
				dq.pop_front();
			}
		}
		cout<<ctr<<endl; 
	}
}