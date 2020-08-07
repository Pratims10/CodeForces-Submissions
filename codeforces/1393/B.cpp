#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	map<ll,ll> f;
	set<pair<ll,ll>> st;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		f[ar[i]]++;
	}
	for(i=0;i<=100000;i++)
	{
		if(f[i]>0)
		{
			st.insert({f[i],i});
		}
	}
	ll q;
	cin>>q;
	while(q--)
	{
		char ch;
		ll x;
		cin>>ch>>x;
		if(ch=='+')
		{
			if(st.find({f[x],x})!=st.end())
			{
				st.erase(st.find({f[x],x}));
				f[x]++;
				st.insert({f[x],x});
			}
			else
			{
				f[x]++;
				st.insert({f[x],x});
			}
		}
		else
		{
			st.erase(st.find({f[x],x}));
			f[x]--;
			if(f[x]>0)
			st.insert({f[x],x});
		}
		if(st.size()==0)
		{
			cout<<"NO\n";
			continue;
		}
		auto it=st.end();
		--it;
		pair<ll,ll> p=*(it);
		
		if(st.size()==1)
		{
			if(p.first>=8) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else
		{
			vector<ll> v;
			ll x=p.first-4;
			if(x>=0)
			{
				v.push_back(x);
				--it;
				p=*(it);
				x=p.first;
				v.push_back(x);
				if(st.size()>2)
				{
					--it;
					p=*(it);
					x=p.first;
					v.push_back(x);
				}
				bool f=false;
				for(ll a=0;a<v.size();a++)
				{
					for(ll b=a+1;b<v.size();b++)
					{
						if(v[a]>=2 and v[b]>=2)
						f=true;
					}
				}
				for(auto xx:v)
				if(xx>=4) f=true;
				if(f)
				cout<<"YES\n";
				else cout<<"NO\n";
			}
			else
			cout<<"NO\n";
		}
	}
}