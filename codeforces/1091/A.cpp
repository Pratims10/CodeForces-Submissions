#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,a,b,c;
	cin>>a>>b>>c;
	if(c<=b && c<=a)
	cout<<3*c-3<<endl;
	else if(b<=a && b<=c)
	{
		if(c>=b+1)
		cout<<3*b<<endl;
		else
		cout<<3*c-3<<endl;
	}
	else if(a<=b && a<=c)
	{
		if(b>=a+1 && c>=a+2)
		cout<<3*a+3<<endl;
		else if(b>=a+1 && c<a+2)
		cout<<3*c-3<<endl;
		else
		cout<<3*b<<endl;
	}
}