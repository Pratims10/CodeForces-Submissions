#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,ctr,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ctr=0;
		while(true)
		{
			if(n%k==0)
			{
				n/=k;
				ctr++;
			}
			else
			{
				ctr+=n-(n/k)*k;
				n-=n-(n/k)*k;
			}
		//	cout<<n<<endl;
			if(n<k)
			{
				ctr+=n;
				break;
			}
		}
		cout<<ctr<<endl;
	}
}