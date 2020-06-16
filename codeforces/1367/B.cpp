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
		ll ar[n];
		ll o=0,e=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]%2) o++;
			else e++;
		}
		if((n%2==1 and e==o+1)||e==o)
		{
			ll ctr=0;
			for(i=0;i<n;i++)
			{
				if(i%2!=ar[i]%2) ctr++;
			}
			ctr/=2;
			cout<<ctr<<endl;
		}
		else
		cout<<-1<<endl;
	}
}