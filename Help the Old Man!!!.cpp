#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> func(int n,int l,int r,int m){
    vector<pair<int,int>> v;
    if(n==1)
    {
        v.push_back(make_pair(l,r));
        return v;
    }
    else{
    vector<pair<int,int>> le;
    le=func(n-1,l,m,r);
    le.push_back(make_pair(l,r));
    vector<pair<int,int>> ri;
    ri=func(n-1,m,r,l);
    le.insert(le.end(),ri.begin(),ri.end());
    return le;}
    
}
int main()
 {
	//code
/* https://practice.geeksforgeeks.org/problems/help-the-old-man/0 */
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int move;
	    cin>>move;
	    vector<pair<int,int>> v=func(n,1,3,2);
	 
	      
	    cout<<v[move-1].first<<" "<<v[move-1].second;
	    cout<<endl;
	}
	return 0;
}