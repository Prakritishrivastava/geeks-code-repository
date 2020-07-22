
#include <bits/stdc++.h>
using namespace std;

int main() {
/* https://practice.geeksforgeeks.org/problems/ishaan-and-sticks/0/ */
	//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    m[arr[i]]++;
	    int max=0,count;
	    map<int,int>::iterator itr;
	    for(auto itr=m.begin();itr!=m.end();itr++){
	        int area=(itr->first)*(itr->first);
	        if(itr->second>=4&&area>max)
	        
	        {   max=area;
	            count=itr->second/4;
	            
	        }
	    }
	
	    if(max!=0&&count!=0)
	    cout<<max<<" "<<count<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}