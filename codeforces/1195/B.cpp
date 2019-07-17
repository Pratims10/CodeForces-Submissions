#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,n,k;
	cin>>n>>k;
	ll a=(-3+sqrt(9+8*(n+k)))/2;
	cout<<n-a;
}