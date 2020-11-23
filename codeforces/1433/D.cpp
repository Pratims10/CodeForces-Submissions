#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define F first
#define S second
ll n,m;
int main()
{
	ll i,j,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		set<pair<ll,ll>> st;
		ll ctr=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]==ar[0])
			ctr++;
		}
		if(ctr==n)
		cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				if(ar[i]!=ar[j]){
					st.insert({min(i,j),max(i,j)});
					break;
				}
			}
			for(set<pair<ll,ll>>::iterator it=st.begin();it!=st.end();it++)
			cout<<(*it).first+1<<' '<<(*it).second+1<<'\n';
		}
	}
}