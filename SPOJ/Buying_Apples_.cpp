    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
     int t;
     scanf("%d",&t);
     while(t--)
     {
      int n,k,b;
      scanf("%d%d",&n,&k);
      b =k;
      int p[k +1];
      int i,j;
      for( i=1; i<=k; i++ )
       scanf("%d",&p[i]);
      int ans[k+1];
      for(i=1; i<=k; i++)
      {
       //if(p[i] == -1)
       // ans[i] = INT_MAX;
       //else
        ans[i] = p[i];
      }
      for(i=2; i<=k; i++)
      {
       for(j=1; j<i; j++)
       {
        if(p[i-j] == -1  || ans[j] == -1)
         continue;
        if(ans[i] == -1)
         ans[i] = ans[j] + p[i-j];
        else
        ans[i] = min(ans[i], ans[j] + p[i-j]);
     
       }
     
      }
      if(k==0)
       printf("0\n");
      else
      printf("%d\n",ans[k]);
     
     }
     return 0;
    } 