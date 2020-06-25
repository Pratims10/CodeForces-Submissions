#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll x=0;
void gcd(ll a,ll b)
{
	if(a==0 or b==0) return;
	if(a==b) x+=a;
	if(a>b) x+=a/b,gcd(a%b,b);
	if(a<b) x+=b/a,gcd(a,b%a);
}
int main()
{
	ll i,j,k,m,n,t,a,b;
	cin>>a>>b;
	gcd(a,b);
	cout<<x;
}