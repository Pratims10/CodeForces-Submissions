
// Problem : A. Candies and Two Sisters
// Contest : Codeforces - Codeforces Round #634 (Div. 3)
// URL : https://codeforces.com/contest/1335/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll m,n,t,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		i=n/2+1;
		j=n-(n/2+1);
		if(i>0 and j>0)
		cout<<j<<endl;
		else
		cout<<0<<endl;
	}
}