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
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.length();
		vector<ll> v;
		for(i=0;i<n;)
		{
			if(s[i]=='0')
			{
				i++;
				continue;
			}
			ll ctr=0;
			while(i<n and s[i]=='1')
			{
				ctr++;
				i++;
			}
			v.push_back(ctr);
		}
		sort(v.begin(),v.end(),srt);
		ll ans=0;
		for(i=0;i<v.size();i+=2)
		ans+=v[i];
		cout<<ans<<endl;
	}
}