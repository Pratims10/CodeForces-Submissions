#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		string s[n];
		for(i=0;i<n;i++)
		cin>>s[i];
		ll ctr=0;
		for(i=0;i<n;i++)
		{
			if(s[i][m-1]=='R') ctr++;
		}
		for(i=0;i<m;i++)
		if(s[n-1][i]=='D') ctr++;
		cout<<ctr<<endl;
	}
}