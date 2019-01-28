#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int check(string s,char ch,ll n)
{
	for(ll i=0;i<n;i++)
	if(s[i]!=ch)
	return 0;
	return 1;
}
int main()
{
	ll n,i,j,k,x;
	string s;
	cin>>n>>k;
	cin>>s;
	ll max=0;
	/*while(max++)
	{
		cin>>i>>j;
		cout<<s.substr(i,j);
	}*/
	for(int ch=97;ch<=122;ch++)
	{
		x=0;
		string str;
		char c=(char)ch;
		str+=c;
		for(i=1;i<k;i++)
		str+=c;
		for(i=0;i<n-k+1;i++)
		{
			j=i;
			ll ctr=0;
			while(ctr<k)
			{
				if(s[j]!=c)
				break;
				j++;
				ctr++;
			}
			if(ctr==k)
			{
				i+=ctr-1;
				x++;
			}
			else
			i+=ctr;
		}
		if(max<x)
		max=x;
	}
	cout<<max<<endl;
}