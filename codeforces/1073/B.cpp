#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int binarySearch(ll arr[],ll l,ll r,ll x)
{
	sort(arr+l,arr+r+1);
   if (r >= l)
   {
        ll mid = l + (r - l)/2;
        if (arr[mid] == x)   
            return mid; 
        if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x); 
   }
   return -1; 
}
int main()
{
	ll n,i,j,tr,c;
	cin>>n;
	ll a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	ll ar[n];
	tr=0;
	for(i=0;i<n;i++)
	cin>>b[i];
	c=0;
	bool flag=false;
	i=0;
	ll r=0;
//	ar[0]=-1;
	ll freq[200005]={0};
	for(i=0;i<n;i++)
	{
		tr=0;
/*		if(b[i]==a[i])
		{
			r++;
			//cout<<"FD";
			freq[a[i]]++;
			tr++;
			cout<<tr<<' ';
			continue;
		}*/
	//	cout<<binarySearch(ar,0,r-1,b[i]);
		if(freq[b[i]])
		{
			//cout<<"SF";
			tr=0;
		}
		else
		{
			//cout<<"FE";
			if(r)
			j=r;
			else
			j=i;
			//cout<<"j="<<j<<endl;
			for(;j<n && r<n;j++)
			{
				freq[a[j]]++;
				tr++;
				r++;
				if(b[i]==a[j])
				break;
			}
		}
		cout<<tr<<' ';
		/*for(j=0;j<r;j++)
		cout<<ar[j]<<' ';
		cout<<endl;*/
	}
	cout<<endl;
}