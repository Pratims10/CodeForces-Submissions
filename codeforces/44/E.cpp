#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b;
	cin>>k>>a>>b;
	string s;
	cin>>s;
	n=s.length();
	if(k*a<=n && n<=k*b)
	{
		ll x=n/k;
		ll ptr=0;
		ll ctr=0;
		while(ctr<n%k)
		{
			cout<<s.substr(ptr,x+1)<<endl;
			ptr+=x+1;
			ctr++;
		}
		while(ptr<n)
		{
			cout<<s.substr(ptr,x)<<endl;
			ptr+=x;
		}
	}
	else cout<<"No solution";
}