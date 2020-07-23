#include<bits/stdc++.h>
using namespace std;
vector<int> func(int n){
    int c=n;
    vector<int> v;
    while(c!=0){
        v.push_back(c%2);
        c=c/2;
    }
    return v;
}
int main()
 {
	//code
/*https://practice.geeksforgeeks.org/problems/reverse-bits/0/ */
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long ans=0;
	    vector<int> v=func(n);
	    for(int i=v.size();i<32;i++)
	    v.push_back(0);
	    for(int i=0;i<v.size();i++)
	    ans=ans*2+v[i];
	    cout<<ans;
	    cout<<endl;
	}
	return 0;
}