#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
/*https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k/0 */
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    queue<int> q;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]<0)
	        q.push(i);
	    }
	    int k;
	    cin>>k;
	    for(int i=0;i<=n-k;i++){
	        if(q.front()<i)
	        q.pop();
	        if(q.front()>=i&&q.front()<i+k)
	        cout<<arr[q.front()]<<" ";
	        else
	        cout<<0<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}