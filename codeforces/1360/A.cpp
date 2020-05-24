#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		ll mn=2*min(a,b);
		mn=max(mn,max(a,b));
		mn*=mn;
		cout<<mn<<endl;
	}
}