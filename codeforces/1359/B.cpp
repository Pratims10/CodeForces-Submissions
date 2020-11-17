#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,t,m,n;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>n>>m>>a>>b;
		string s[n];
		for(i=0;i<n;i++)
		cin>>s[i];
		ll ans=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(j<m-1 and s[i][j]=='.' and s[i][j+1]=='.')
				{
					if(2*a>b)
					ans+=b;
					else ans+=2*a;
					j++;
				}
				else if(j==m-1 and s[i][j]=='.')
				ans+=a;
				else if(j<m-1 and s[i][j]=='.' and s[i][j+1]!='.')
				ans+=a;
			}
		}
		cout<<ans<<'\n';
	}
}