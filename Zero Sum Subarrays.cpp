#include <bits/stdc++.h>
using namespace std;

int main() {
/*https://practice.geeksforgeeks.org/problems/zero-sum-subarrays/0 
*/
	//code
	 long int t;
	cin>>t;
	while(t--){
	     long int n;
	    cin>>n;
	     long int arr[n];
	    for( long int i=0;i<n;i++)
	    cin>>arr[i];
	     long int count=0;
     long int sum=0;
    unordered_map< long int, long int> m;
    for( long int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0)
        count++;
        if(m.find(sum)!=m.end())
        count+=m[sum];
        m[sum]++;
    }
	  cout<<count<<endl;  
	}
	return 0;
}