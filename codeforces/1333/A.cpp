#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
typedef struct val{
	ll t,r,ind;
};
bool srt(val a,val b)
{
	if(a.r==b.r) return a.ind>b.ind;
	return a.r>b.r;
}
bool srt1(ll a,ll b)
{
	return a>b;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		string s[n];
		for(i=0;i<m;i++)
		if(i%2==0) s[0]+='B';
		else s[0]+='W';
		for(i=1;i<n;i++)
		{
			for(j=0;j<m;j++)
			if(s[i-1][j]=='B') s[i]+='W';
			else s[i]+='B';
		}
		s[n-1][m-1]='B';
		if(n%2==0 and m%2==0) s[n-1][0]='B';
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<endl;
		}
	}
}