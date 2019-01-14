#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ctr=0;
	cin>>n;
	ctr+=n/100;
	n%=100;
	ctr+=n/20;
	n%=20;
	ctr+=n/10;
	n%=10;
	ctr+=n/5;
	n%=5;
	ctr+=n;
	cout<<ctr;
}