#include<bits/stdc++.h>
using namespace std;
int main()
 {
/*https://practice.geeksforgeeks.org/problems/key-pair/0/ */
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n>>sum;
	    vector<int> v(n);
	    map<int,int> mp;
	    for(int i=0;i<n;i++){
	    cin>>v[i];
	        mp[v[i]]++;
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        if((mp.find(sum-v[i])!=mp.end()))
	        {
	            if(sum-v[i]==v[i]&&mp[v[i]]>1){
	            ans++;
	            break;}
	            else if(sum-v[i]!=v[i]){
	               ans++;
	            break; 
	            }
	        }
	    }
	    if(ans==0)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
	    
	}
	return 0;
}