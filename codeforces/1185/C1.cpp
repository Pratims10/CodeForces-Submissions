#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,b,c,d;
	cin>>n>>m;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll a[n];
	a[0]=ar[0];
	cout<<"0 ";
	ll s=ar[0];
	for(i=1;i<n;i++)
	{
		s+=ar[i];
		if(s>m)
		{
			ll s2=s;
			sort(a,a+i);
			j=i-1;
			ll ctr=0;
			while(s2>m)
			{
//				cout<<s2<<" ";
				s2-=a[j--];
				ctr++;
			}
//			cout<<s2<<endl;
			cout<<ctr<<' ';
		}
		else
		cout<<"0 ";
		a[i]=ar[i];
	}
}