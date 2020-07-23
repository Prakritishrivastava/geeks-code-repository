#include<bits/stdc++.h>
using namespace std;
int main()
 {
/* https://practice.geeksforgeeks.org/problems/relative-sorting/0 */
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m;
	    cin>>n;
	    vector<int> v1;
	    vector<int> v2;
	    int temp;
	    for(int i=0;i<m;i++)
	    {
	        cin>>temp;
	        v1.push_back(temp);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
	        v2.push_back(temp);
	    }
	    map<int,int> m1;
	    map<int,int> m2;
	    vector<int> tp;
	    for(int i=0;i<n;i++)
	    m2[v2[i]]++;
	    for(int i=0;i<m;i++){
	        if(m2.find(v1[i])!=m2.end())
	        m1[v1[i]]++;
	        else
	        tp.push_back(v1[i]);
	    }
	    sort(tp.begin(),tp.end());
	    for(int i=0;i<n;i++){
	      for(int j=0;j<m1[v2[i]];j++)
	      cout<<v2[i]<<" ";
	    }
	    for(int i=0;i<tp.size();i++)
	    cout<<tp[i]<<" ";
	    cout<<endl;
	}
	return 0;
}                                    