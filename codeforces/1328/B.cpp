#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll ctr,i,k,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		string s;
		for(i=0;i<n;i++)
		s+='a';
		i=1;
		ctr=1;
		while(i<k)
		{
			ctr++;
			i+=ctr;
		}
		s[n-ctr-1]='b';
		s[n-(k-i+ctr)]='b';
		cout<<s<<endl;
	}
}