#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	cout<<fixed<<setprecision(10);
	ll i,j,h,l;
	cin>>h>>l;
	long double H=h*1.0,L=1.0*l;
	long double x=(L*L-H*H)/(2.0*H);
	cout<<x;
}