#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.length();
		ll mx=0;
		for(i=0;i<n;)
		{
			ll ctr=0;
			while(i<n and s[i]=='L')
			{
				i++;
				ctr++;
			}
			mx=max(mx,ctr);
			while(i<n and s[i]=='R')
			i++;
		}
		cout<<mx+1<<endl;
	}
}