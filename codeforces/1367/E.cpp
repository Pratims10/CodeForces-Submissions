#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,m,n,k,t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>n>>k;
		cin>>s;
		ll f[26]={0};
		for(i=0;i<n;i++)
		{
			f[s[i]-'a']++;
		}
		ll len=1;
		vector<ll> factors;
		for(i=1;i*i<=k;i++)
		{
			if(k%i==0)
			{
				if(k/i==i)
				factors.push_back(i);
				else
				{
					factors.push_back(i);
					factors.push_back(k/i);
				}
			}
		}
		for(auto x:factors)
		{
			for(i=x;i<=n;i+=x)
			{
				ll segments=i/x;
				ll ctr=0;
				for(j=0;j<26;j++)
				ctr+=f[j]/segments;
				if(ctr>=x)
				len=max(len,i);
			}
		}
		cout<<len<<endl;
	}
}