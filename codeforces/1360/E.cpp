#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,t,i,j,k,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s[n],s2[n];
		for(i=0;i<n;i++)
		{
			cin>>s[i];
			s2[i]=s[i];
		}
		bool fl=true;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			if(s[i][j]=='1')
			{
				if(s[i+1][j]!='1' and s[i][j+1]!='1') fl=false;
			}
		}
		if(fl) cout<<"YES\n";
		else cout<<"NO\n";
	}
}