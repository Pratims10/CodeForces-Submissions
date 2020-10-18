#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	string s;
	cin>>s;
	n=s.length();
	cout<<4<<'\n';
	cout<<"R 2\n";
	n+=n-2;
	cout<<"L 2\n";
	n++;
	cout<<"R 2\n";
	n+=n-2;
	cout<<"R "<<n-1<<endl;
}