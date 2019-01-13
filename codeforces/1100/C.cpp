#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	cout<<setprecision(10);
	ll n,r;
	long double x;
	cin>>n>>r;
	x=180.0/(n*1.0);
	x=/*0.0174533*x;*/(3.14159265358979323*x)/180.0;
	cout<<(r*sinl(x))/(1.0-sinl(x))<<endl;
}