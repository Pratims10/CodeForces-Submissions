#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(string s)
{
	//cout<<s<<' ';
	ll ctr=1,ret=0;
	for(ll i=3;i>=0;i--)
	{
		if(s[i]=='1')
		ret+=ctr;
		ctr*=2;
	}
	return ret;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		for(i=0;i<n;i++)
		s+="9";
		ll q=(n-1)/4+1;
		ll ctr=0;
		i=n-1;
		while(ctr<q)
		{
			s[i--]='8';
			ctr++;
		}
		cout<<s;
		cout<<endl;
	}
}