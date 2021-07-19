#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int i,k,n,m,p,j;
        cin>>k>>n>>m;
        int a[n],b[m];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
            cin>>b[i];
        int ans[n+m]={0};
        int f=1;
        for(i=0,j=0,p=0 ;j<n and p<m ;i++)
        {
            if(a[j]<=b[p] && a[j]<=k )
            {
                if(a[j]==0)
                    k++;
                ans[i]=a[j];
                j++;
                
            }
           
            else if(b[p]<a[j] && b[p]<=k )
            {
                if(b[p]==0)
                    k++;
                ans[i]=b[p];
                p++;
               
            }
            else
            {
                f=0;
                break;
            }
                
        }
        int q=1;
        for(;i<n+m,j<n;i++,j++)
        {
            if(a[j]<=k)
            {
                if(a[j]==0)
                    k++;
                ans[i]=a[j];
            }
            else
                q=0;
            
        }
        int w=1;
        for(;p<m;p++)
        {
            if(b[p]<=k)
            {
                if(b[p]==0)
                    k++;
                ans[i]=b[p];
                i++;
            }
            else
                w=0;
            
        }
        if(f==1 && q==1 && w==1)
        {
            for(i=0;i<n+m;i++)
                cout<<ans[i]<<" ";
        }
        else
            cout<<-1;
        cout<<endl;
    }
	return 0;
}