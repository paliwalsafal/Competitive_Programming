    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	string n;
    	cin>>n;
    	while(n != "0")
    	{
    		int len = n.size();
    		vector<int> dp(len);
    		dp[0]=1;
    		for(int i = 1 ; i < len ; i++)
    		{
    			if(n[i]-'0'>0)
    				dp[i] = dp[i-1];
    			int val = 10*(n[i-1]-'0')+(n[i]-'0');
    			if(val>9 && val <27)
    			{
    				if(i<2)
    					dp[i] = dp[i] + dp[0];
    				else dp[i] = dp[i] + dp[i-2];
    			}
     
    		}
    		cout<<dp[len-1]<<"\n";
    		cin>>n;
    	}
    	return 0;
    } 