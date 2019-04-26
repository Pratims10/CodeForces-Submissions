#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,ctr,n;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ctr=0;
	char s[n];
	ll l=0,r=n-1;
	ll ans=0;
	ll no=n,q=0;
	while(q<n&&l<=r&&l<n&&r>=0&&no>0)
	{
		q++;
		if(ar[l]<ar[r])
		{
			if(ar[l]>ans)
			{
//				cout<<'a';
				s[ctr++]='L';
				ans=ar[l];
				l++;
				no--;
			}
			else if(ans<ar[r])
			{
//				cout<<'b';
				s[ctr++]='R';
				ans=ar[r];
				r--;
				no--;
			}
			else break;
		}
		else if(ar[l]>=ar[r])
		{
			if(ar[r]>ans)
			{
//				cout<<'c';
				s[ctr++]='R';
				ans=ar[r];
				r--;
				no--;
			}
			else if(ans<ar[l])
			{
//				cout<<'d';
				s[ctr++]='L';
				ans=ar[l];
				l++;
				no--;
			}
			else break;
		}
//		cout<<ctr;
	}
	cout<<ctr<<endl;
	for(i=0;i<ctr;i++)
	cout<<s[i];
}