#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	string s,s2;
	cin>>s>>s2;
	n=s.length();
	m=s2.length();
	ll ar[26],pos[n+1][26];
	for(i=0;i<26;i++)
	ar[i]=-1;
	for(i=n;i>=0;i--)
	{
		for(j=0;j<26;j++)
		pos[i][j]=ar[j];
		if(i>0)
		ar[s[i-1]-'a']=i;
	}
	ll x=0,ctr=1;
	for(i=0;i<m;i++)
	{
		ll y=pos[x][s2[i]-'a'];
		if(y==-1)
		{
			i--;
			if(x==0) {
				cout<<-1;
				return 0;
			}
			x=0;
			ctr++;
		}
		else x=y;
	}
	cout<<ctr;
}