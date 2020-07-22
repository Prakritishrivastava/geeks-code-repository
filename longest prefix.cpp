
#include <bits/stdc++.h>
using namespace std;
string func(string s,string x){
    if(s.size()==0||x.size()==0)
    return "-1";
    string str="";
    int i=0;
    while(s[i]==x[i]&&i<s.size()&&i<x.size()){
        str=str+s[i];
        i++;
    }
    if(str.size()==0)
    return "-1";
    else
    return str;
}
int main() {
/* https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array/0/ */
	//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    int n,ans=0;
	    cin>>n;
	    if(n==1){
	        string str;
	        cin>>str;
	        cout<<str<<endl;;
	    }
	    else{
	    vector<string> v;
	    for(int i=0;i<n;i++){
	        string temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    string str=func(v[0],v[1]);
	    for(int i=2;i<n;i++){
	        if(str.size()!=0){
	            str=func(str,v[i]);
	        }
	        else 
	        break;
	    }
	    
	    cout<<str<<endl;}
	}
	return 0;
}