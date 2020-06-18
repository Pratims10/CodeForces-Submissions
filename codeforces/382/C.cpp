#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	map<ll,ll> mp,diff;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		mp[ar[i]]++;
	}
	if(n==1)
	{
		cout<<-1;
		return 0;
	}
	ll x=ar[0];
	for(i=0;i<n;i++)
	{
		if(x!=ar[i]) x=-1;
	}
	if(n==2 and x==-1)
	{
		ll df=ar[1]-ar[0];
		if(df%2==0)
		{
			cout<<3<<endl;
			vector<ll> v;
			v.push_back(ar[0]-df);
			v.push_back(ar[0]+(df/2));
			v.push_back(ar[1]+df);
			sort(v.begin(),v.end());
		    for(auto q:v) cout<<q<<' ';
			return 0;
		}
	}
	sort(ar,ar+n);
	for(i=0;i<n-1;i++)
	diff[ar[i+1]-ar[i]]++;
	if(x==-1)
	{
		if(diff.size()>=3) cout<<0;
		else
		{
			if(diff.size()==1)
			{
				cout<<2<<endl;
				ll df=ar[1]-ar[0];
				cout<<min(ar[0]-df,ar[n-1]+df)<<' '<<max(ar[0]-df,ar[n-1]+df);
			}
			else
			{
				ll a=-1,b=-1;
				for(auto x:diff)
				{
					if(a==-1) a=x.first;
					else b=x.first;
				}
				//cout<<a<<' '<<b<<endl;
				if(b%2==0 and a==b/2 and diff[b]==1){
					j=ar[0];
					while(true)
					{
						if(!mp[j+a])
						{
							cout<<1<<endl<<j+a; return 0;
						}
						j+=a;
					}
				}
				else cout<<0;
			}
		}
	}
	else
	{
		cout<<1<<endl;
		cout<<x<<endl;
	}
}