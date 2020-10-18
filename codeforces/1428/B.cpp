#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		ll l=0,r=0,b=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='<')
			l++;
			else if(s[i]=='>')
			r++;
			else b++;
		}
		if(l==0 or r==0)
		cout<<n<<endl;
		else
		{
			ll ctr=0;
			for(i=0;i<n;i++)
			{
				ll x=i;
				ll y=i-1;
				if(y==-1)
				y=n-1;
				if(s[x]=='-' or s[y]=='-')
				ctr++;
			}
			cout<<ctr<<endl;
		}
	}
}