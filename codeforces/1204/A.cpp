#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,a,b,c,l,r;
	string s;
	cin>>s;
	l=s.length();
	bool flg=true;
	if(s[0]=='1')
	{
		for(i=1;i<l;i++)
		if(s[i]=='1')
		flg=false;
	}
	if(flg)
	{
		cout<<l/2;
	}
	else
	{
		cout<<(l+1)/2;
	}
}