#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		ll ans=0,x=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='(') x++;
			else x--;
			if(x<0)
			{
				ans++;
				x=0;
			}
		}
		cout<<ans<<endl;
	}
}