#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srt(ll a,ll b)
{
	return a>b;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	stack<ll> st;
	for(i=0;i<n;i++)
	st.push(i);
	ll ar[n];
	for(i=0;i<n;i++)
	ar[i]=-1;
	while(!st.empty())
	{
		ll a=st.top();
		st.pop();
		if(st.empty())
		{
			map<ll,ll> mp;
			for(i=0;i<n;i++)
			mp[ar[i]]++;
			ll val;
			for(i=1;i<=n;i++)
			if(!mp[i])
			val=i;
			cout<<"! ";
			for(i=0;i<n;i++)
			{
				if(ar[i]==-1)
				cout<<val<<' ';
				else cout<<ar[i]<<' ';
			}
			cout<<endl;
			fflush(stdout);
			break;
		}
		ll b=st.top();
		st.pop();
		ll k1,k2;
		cout<<"? "<<a+1<<' '<<b+1<<endl;
		fflush(stdout);
		cin>>k1;
		cout<<"? "<<b+1<<' '<<a+1<<endl;
		fflush(stdout);
		cin>>k2;
		k=max(k1,k2);
		if(k==k1)
		{
			ar[a]=k1;
			st.push(b);
		}
		else
		{
			ar[b]=k2;
			st.push(a);
		}
	}
}