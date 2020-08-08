#include<bits/stdc++.h>
using namespace std;
int main()
 {
/*https://practice.geeksforgeeks.org/problems/make-matrix-beautiful/0/*/
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n][n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	        cin>>arr[i][j];
	            sum+=arr[i][j];
	        }
	    }
	    vector<int> row;
	    for(int i=0;i<n;i++){
	        int count=0;
	        for(int j=0;j<n;j++)
	        count+=arr[i][j];
	        row.push_back(count);
	    }
	    vector<int> col;
	    for(int i=0;i<n;i++){
	        int count=0;
	        for(int j=0;j<n;j++)
	        count+=arr[j][i];
	        col.push_back(count);
	    }
	    int r=*max_element(row.begin(),row.end());
	    int c=*max_element(col.begin(),col.end());
	    int ans=0;
	    ans=(max(r,c)*n)-sum;
	    cout<<ans<<endl;
	}
	return 0;
}