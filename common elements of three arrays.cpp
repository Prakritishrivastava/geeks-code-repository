
#include <bits/stdc++.h>
using namespace std;

int main() {
/* https://practice.geeksforgeeks.org/problems/common-elements/0/ */
	//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    int n1,n2,n3;
	    cin>>n1;
	    cin>>n2;
	    cin>>n3;
	    int ans=0;
	    map<int,int> m1;
	    map<int,int> m2;
	    map<int,int> m3;
	    int temp;
	    for(int i=0;i<n1;i++){
	       cin>>temp;
	       m1[temp]++;
	    }
	    for(int i=0;i<n2;i++){
	       cin>>temp;
	       m2[temp]++;
	    }
	    for(int i=0;i<n3;i++){
	       cin>>temp;
	       m3[temp]++;
	    }
	    map<int,int>::iterator itr;
	    for(auto itr=m1.begin();itr!=m1.end();itr++){
	        int key=itr->first;
	        if(m2[key]!=0&&m3[key]!=0){
	        cout<<itr->first<<" ";
	        ans++;
	    }}
	    if(ans==0)
	    cout<<-1;
	    cout<<endl;
	    
	}
	return 0;
}