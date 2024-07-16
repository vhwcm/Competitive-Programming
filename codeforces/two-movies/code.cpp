#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1;
int main()
   {
    int t,n,x,y,a[N],b[N];
    cin>>t;
    	while(t--)
    	{
    		cin>>n;
    		x=0;
    		y=0;
    		for(int i=1;i<=n;i++) cin>>a[i];
    		for(int i=1;i<=n;i++) cin>>b[i];
    		for(int i=1;i<=n;i++)
    		{
    			if(a[i]>b[i]) x+=a[i];
    			if(b[i]>a[i]) y+=b[i];
    		}
    		for(int i=1;i<=n;i++)
    		{
    			if(a[i]==b[i])
    			{
    				if(a[i]*(x-y)>0) y+=b[i];
    				else x+=a[i];
    			}
    		}
    		cout<<min(x,y)<<endl;
    	}
        return 0;
    }
