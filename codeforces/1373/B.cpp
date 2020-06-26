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
		ll z,o=0;
		for(auto x:s)
		if(x=='1') o++;
		z=n-o;
		if(min(o,z)%2==1) cout<<"DA\n";
		else cout<<"NET\n";
	}
}