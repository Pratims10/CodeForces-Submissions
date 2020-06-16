#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srtbysec(pair<string,ll> a,pair<string,ll> b)
{
	return a.second<b.second;
}
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		vector<ll> v;
		set<ll,greater<ll> > st;
		cin>>n;
		for(i=1;i*i<=n;i++)
		{
			ll x=n/i;
			st.insert(n/x);
			st.insert(n/i);
		}
		st.insert(0ll);
		cout<<st.size()<<endl;
		for(auto x:st)
		v.push_back(x);
		for(i=v.size()-1;i>=0;i--)
		cout<<v[i]<<' ';
		cout<<endl;
	}
}