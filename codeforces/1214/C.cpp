#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,n,j,k,m,t,d,e,b,g;
	string s;
	cin>>n;
	cin>>s;
	ll ar[n];
	ll ctr=0;
	bool flag=true;
	ll c2=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='(')
		ctr++;
		else
		ctr--;
		if(ctr==-1)
		c2++;
		else if(ctr<-1)
		flag=false;
	//	cout<<ctr<<endl;
	}
	if(flag==false)
	cout<<"No";
	else if(ctr!=0)
	cout<<"No";
	else cout<<"Yes";
}