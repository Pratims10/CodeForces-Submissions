#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n;
	cin>>n;
	ll ar[n];
	ll freq[101]={0};
	for(i=0;i<n;i++)
	{
		cin>>j;
		freq[j]++;
	}
	ll ctr=0;
	ll a=0,b=0,c=0;
	for(i=0;i<=100;i++)
	{
		if(freq[i]>0)
		{
			ctr++;
			if(a==0)
			a=i;
			else if(b==0)
			b=i;
			else if(c==0)
			c=i;
		}
	}
	if(ctr>3)
	cout<<-1<<endl;
	else
	{
		if(ctr==2){
			if((b-a)%2==1)
			cout<<b-a<<endl;
			else
			cout<<(b-a)/2<<endl;
		}else if(ctr==1)
		cout<<0<<endl;
		else if(ctr==3){
		if((b-a)==(c-b))
		cout<<b-a<<endl;
		else cout<<-1<<endl;
	}
	}
}