#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ld long double
int main()
{
	ll a,b,c,d,i,j,k,n,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		bool flag=true;
		for(i=0;i<n;i++)
		cin>>ar[i];
		for(i=0;i<n-1;i++)
		{
			if(ar[i]+1==ar[i+1]) continue;
			else if(ar[i]>ar[i+1]) continue;
			else flag=false;
		}
		if(flag)
		cout<<"Yes\n";
		else cout<<"No\n";
	}
}