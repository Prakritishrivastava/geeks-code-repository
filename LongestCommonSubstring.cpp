#include <bits/stdc++.h>
using namespace std;

int lcs(int n, int m, string s1, string s2)
{
    int dp[n+1][m+1];
    for(int i =0;i<=m;i++)
    {
        dp[0][i]=0;
    }
    for(int i =0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+ dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    int max=0;
    for(int i =1;i<=n;i++)
    {
        int v = *max_element(dp[i],dp[i]+m+1);
        if(v>max)
        {
            max=v;
        }
    }
    return max;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<lcs(n,m,s1,s2)<<"\n";
	}
	return 0;
}