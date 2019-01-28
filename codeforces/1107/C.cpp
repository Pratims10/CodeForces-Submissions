#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,t,n,ans;
	cin>>n>>k;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	string s;
	cin>>s;
	ans=0;
	ll l=s.length();
	for(i=0;i<l;i++)
	{
		char ch=s[i];
		ll ctr=0;
		j=i;
		while(s[j]==ch&&i<l)
		{
			j++;
			ctr++;
		}
		if(ctr<=k)
		{
			ll c=1;
			while(c<=ctr)
			{
				ans+=ar[i++];
				c++;
			}
			i=j-1;
		}
		else
		{
		//	cout<<i<<' '<<i+ctr<<'d'<<endl;
			sort(ar+i,ar+i+ctr,greater<ll>());
			ll c=0;
			j=i;
			while(c<k)
			{
				c++;
				ans+=ar[j++];
			}
			i+=ctr-1;
		}
	}
	cout<<ans<<endl;
}