#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		int c[n],p=1,pos=-1;
		for(i=0;i<n;)
		{
			j=i;
			int ctr=0;
			while(j<n and ar[i]==ar[j])
			{
				if(p==1)
				c[j]=1;
				else c[j]=2;
				ctr++;
				if(ctr==2)
				pos=j;
				j++;
			}
			p*=-1;
			i=j;
		}
		if(ar[0]!=ar[n-1])
		{
		    if(c[0]==c[n-1])
            {
                if(pos!=-1)
                {
                    for(i=pos;i<n;i++)
                    if(c[i]==2)
                    c[i]=1;
                    else c[i]=2;
                }
                else
                c[n-1]=3;
		    }
		}
		map<int,int> mp;
		for(i=0;i<n;i++)
		{
		    mp[c[i]]++;
        }
		cout<<mp.size()<<endl;
		for(i=0;i<n;i++)
		cout<<c[i]<<' ';
		cout<<endl;
	}
}
