#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	string s;
	cin>>s;
	ll x=n-11;
	ll ctr=0;
	for(i=0;i<=x;i++)
	if(s[i]=='8') ctr++;
	if(ctr>=(x/2+1)) cout<<"YES";
	else cout<<"NO";
}