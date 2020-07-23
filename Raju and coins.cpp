#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
/*https://practice.geeksforgeeks.org/problems/raju-and-coins/0 */
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    map<int,int> mp;
	    int temp;
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        mp[temp]++;
	    }
	    int copy=0;
	    int count=0;
	    int i=1;
	    while(copy<=k){
	      if(mp.find(i)==mp.end()){
	      copy=copy+i;
	          count++;
	      }
	      i++;
	    }
	    if(copy>k)
	    cout<<count-1<<endl;
	    else
	    cout<<count<<endl;
	}
	return 0;
}