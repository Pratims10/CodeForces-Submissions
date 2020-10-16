#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		ll ctr=0;
		vector<ll> v;
		for(i=0;i<n;)
		{
			char ch=s[i];
			ll c=0;
			while(i<n and s[i]==ch)
			{
				i++;
				c++;
			}
			v.push_back(c);
		}
		ll l=0;
		for(i=0;i<v.size();)
		{
			while(l<v.size() and v[l]<=1)
			l++;
			if(l==v.size())
			{
				ctr++;
				i+=2;
			}
			else
			{
				v[l]--;
				ctr++;
				v[i]=0;
				i++;
			}
		}
		cout<<ctr<<endl;
	}
}