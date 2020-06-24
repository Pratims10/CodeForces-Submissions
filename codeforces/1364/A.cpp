#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,x,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		ll ar[n];
		ll ans=n,s=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			s+=ar[i];
		}
		ll l=0,r=n-1;
		while(l<n and ar[l]%x==0) l++;
		if(l==n) cout<<-1<<endl;
		else
		{
			if(s%x!=0) cout<<n<<endl;
			else
			{
				while(r>=0 and ar[r]%x==0) r--;
				cout<<max(n-l-1,r)<<endl;
			}
		}
	}
}