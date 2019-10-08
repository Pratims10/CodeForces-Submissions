#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,r;
	cin>>t;
	while(t--)
	{
		ll h;
		cin>>h>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		i=0;
		if(h<=2)
		{
			cout<<0<<endl;
			continue;
		}
		ll ctr=0;
		bool flag=true;
		while(i>=0)
		{
		//	cout<<i<<endl;
			if(flag==true&&i==n-2)
			{
				if(ar[n-1]!=ar[n-2]-1)
				ar[n-2]=ar[n-1]+1;
				if(ar[n-2]>2)
				ctr++;
				break;
			}
			if(i==n-1)
			{
				if(flag)
				break;
				else
				{
					if(h>2)
					ctr++;
					break;
				}
			}
			if(flag)
			{
			//	cout<<i<<endl;
				if(ar[i]==ar[i+1]+1)
				{
					if(ar[i]!=ar[i+2]+2)
					{
				//		cout<<"A";
						h=ar[i+2]+1;
						flag=false;
						ctr++;
					}
					else flag=true;
					i++;
				}
				else{
					ar[i]=ar[i+1]+1;
					i--;
				}
			}
			else
			{
			//	cout<<i<<endl;
				if(h==ar[i]+1)
				{
					if(h!=ar[i+1]+2)
					{
						h=ar[i+1]+1;
						flag=false;
						ctr++;
					}
					else flag=true;
				}
			}
			i++;
		}
		cout<<ctr<<endl;
	}
}