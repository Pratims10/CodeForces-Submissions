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
		ll ans=n;
		for(i=0;i<n;)
		{
			if(s[i]=='+')
			{
				ll x=0;
				do
				{
					if(s[i]=='+')
					    x++,i++;
					else
					    x--,i++;
				}while(i<n and x>0);
			}
			else ans+=++i;
		}
		cout<<ans<<endl;
	}
}