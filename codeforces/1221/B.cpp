                #include<bits/stdc++.h>
                using namespace std;
                #define ll long long int
                int main()
                {
                	ll i,j,k,m,n,t;
                	cin>>n;
                	ll p=1;
                	for(i=0;i<n;i++)
                	{
                	    if(n%2==0&&i%2==1)
                	    p=-1;
                	    else if(n%2==0&&i%2==0)
                	    p=1;
                		for(j=0;j<n;j++)
                		{
                			if(p==1)
                			cout<<"B";
                			else cout<<"W";
                			p*=-1;
                		}
                		cout<<endl;
                	}
                }