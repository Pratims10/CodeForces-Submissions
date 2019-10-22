#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll root (ll Arr[ ] ,ll i)
{
	ll j=i;
    while(Arr[ i ] != i)
    { 
		i = Arr[ i ]; 
    }
    Arr[j]=i;
	return i;
}
void join(ll Arr[ ],ll size[ ],ll A,ll B)
{
    ll root_A = root(Arr,A);
    ll root_B = root(Arr,B);
    if(root_A==root_B)
    return ;
    if(size[root_A] < size[root_B ])
    {
	Arr[ root_A ] = Arr[root_B];
	size[root_B] += size[root_A];
	}
    else
    {
	Arr[ root_B ] = Arr[root_A];
	size[root_A] += size[root_B];
	}
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n],arr[n],size[n];
		for(i=0;i<n;i++)
		{
			arr[i]=i;
			size[i]=1;
		}
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			ar[i]--;
			join(arr,size,i,ar[i]);
		}
		/*ll ans[n];
		for(i=0;i<n;i++)
		ans[i]=-1;
		for(i=0;i<n;i++)
		{
			if(ans[i]!=-1)
			continue;
			cout<<'a';
			vector<ll> v;
			j=i;
			ll ctr=1;
			v.push_back(j);
			while(j!=ar[i])
			{
				cout<<j<<' '<<ar[i]<<endl;
				j=ar[j];
				ctr++;
				v.push_back(j);
			}
			for(j=0;j<v.size();j++)
			{
				ans[v[i]]=ctr;
			}
		}*/
		for(i=0;i<n;i++)
		cout<<size[root(arr,i)]<<' ';
		cout<<endl;
	}
}