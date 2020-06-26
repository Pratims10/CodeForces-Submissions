#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(c>a) cout<<1<<' ';
		else cout<<-1<<' ';
		if(a*b>c) cout<<b;
		else cout<<-1;
		cout<<endl;
	}
}