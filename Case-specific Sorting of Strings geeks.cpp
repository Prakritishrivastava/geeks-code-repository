
#include <bits/stdc++.h>
using namespace std;

int main() {
/*link:https://practice.geeksforgeeks.org/problems/case-specific-sorting-of-strings/0 */	
//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    vector<char> lo;
	    vector<char> up;
	    for(int i=0;i<n;i++){
	        if(str[i]>=65&&str[i]<=90)
	        up.push_back(str[i]);
	        else
	        lo.push_back(str[i]);
	        
	    }
	    sort(lo.begin(),lo.end());
	    sort(up.begin(),up.end());
	    string ans="";
	    int l=0,u=0;
	    for(int i=0;i<n;i++){
	        if(str[i]>=65&&str[i]<=90)
	        {
	            ans=ans+up[u];
	            u++;
	        }
	        else{
	           ans=ans+lo[l]; 
	           l++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}