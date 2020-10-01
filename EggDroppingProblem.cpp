#include <bits/stdc++.h>
using namespace std;

int egg(int n, int k)
{
    int dp[n+1][k+1];
    for(int i =0;i<=k;i++)
    {
        dp[1][i]=i;
        dp[0][i]=0;
    }
     for(int i =0;i<=n;i++)
    {
        dp[i][0]=0;
        
    }
    for(int i =2;i<=n;i++)
    {
        for(int j =1;j<=k;j++)
        {
            int min = INT_MAX;
            for(int x=1;x<=j;x++)
            {
                int ans = 1+ max(dp[i-1][x-1],dp[i][j-x]);
                if(min>ans)
                {
                    min = ans;
                }
            }
            dp[i][j]=min;
        }
    }
    return dp[n][k];
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    cout<<egg(n,k)<<"\n";
	}
	return 0;
}