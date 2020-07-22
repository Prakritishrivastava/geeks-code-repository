
#include <bits/stdc++.h>
using namespace std;

int main() {
/*https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number/0/*/
	//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    int index;
	   map<int,int> m;
	   for(int i=0;i<v.size();i++){
	       if(v[i]>0)
	       m[v[i]]++;
	   }
	    int i=1;
	    while(m.find(i)!=m.end())
	    i++;
	    cout<<i<<endl;
	}
	return 0;
}