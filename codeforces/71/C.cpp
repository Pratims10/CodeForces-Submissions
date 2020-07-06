#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[100001],n;
bool chk(ll x)
{
	//cout<<"x="<<x<<endl;
	for(ll i=0;i<n/x;i++)
	{
		bool flag=true;
		ll ctr=0;
		for(ll j=i;j<n;j+=n/x)
		{
			if(!ar[j]) flag=false;
			//cout<<j<<' ';
			ctr++;
		}
		//cout<<endl;
		if(flag and ctr>2){
			cout<<"YES";
			return true;
		}
	}
	return false;
}
int main()
{
	ll i,j,k,m,t;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				if(chk(i)) return 0;
			}
			else
			{
				if(chk(i)) return 0;
				if(chk(n/i)) return 0;
			}
		}
	}
	cout<<"NO\n";
}