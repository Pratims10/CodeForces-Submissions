#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==b+c+d||b==a+c+d||c==a+b+d||d==a+b+c||a+b==c+d||a+c==b+d||a+d==b+c)
	cout<<"YES\n";
	else cout<<"NO\n";
}