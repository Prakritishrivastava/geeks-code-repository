#include<bits/stdc++.h>
using namespace std;
int main()
 {
/*https://practice.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k/0*/
	//code
	int t;
	cin>>t;
	while(t--){
	    int count=0;
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    vector<pair<int,int>> mp;
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    int diff;
	    cin>>diff;
	    sort(v.begin(),v.end());
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	          if(v[j]-v[i]==diff&&find(mp.begin(),mp.end(),make_pair(v[i],v[j]))==mp.end()){
	              mp.push_back(make_pair(v[i],v[j]));
	          }  
	        }
	    }
	    cout<<mp.size()<<endl;
	    
	}
	return 0;
}