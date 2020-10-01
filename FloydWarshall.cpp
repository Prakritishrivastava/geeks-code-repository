#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n][n];
	    for(int i =0;i<n;i++)
	        {
	            for(int j =0;j<n;j++)
	            {
	                cin>>arr[i][j];
	            }
	        }
	    for(int k=0;k<n;k++)
	    {
	        for(int i =0;i<n;i++)
	        {
	            for(int j =0;j<n;j++)
	            {
	                if(arr[i][k]==10000000 || arr[k][j]==10000000)
	                {
	                    continue;
	                }
	                if(arr[i][j]>arr[i][k]+arr[k][j])
	                {
	                    arr[i][j]=arr[i][k]+arr[k][j];
	                }
	            }
	        }
	    }
	    for(int i =0;i<n;i++)
	        {
	            for(int j =0;j<n;j++)
	            {
	                if(arr[i][j]==10000000)
	                cout<<"INF"<<" ";
	                else
	                cout<<arr[i][j]<<" ";
	            }
	            cout<<"\n";
	        }
	}
	return 0;
}