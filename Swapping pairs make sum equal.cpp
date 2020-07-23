#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
/* https://practice.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal/0 */
	int t;
	cin>>t;
	while(t--){
	    int ans=0;
	    int m,n;
	    cin>>m;
	    cin>>n;
	    vector<int> v;
	    map<int,int> mp;
	    int s1=0,s2=0;
	    int temp;
	    for(int i=0;i<m;i++){
	        cin>>temp;
	        v.push_back(temp);
	        s1+=temp;
	    }
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        mp[temp]++;
	        s2+=temp;
	    }
	    if((abs(s2-s1))%2!=0)
	    ans=-1;
	    else{
	        
	            for(int i=0;i<m;i++)
	            {
	                if(mp.find(v[i]-(s1-s2)/2)!=mp.end()){
	                ans=1;
	                break;}
	            }
	            if(ans==0)
	            ans=-1;
	        
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}