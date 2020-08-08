#include<bits/stdc++.h>
using namespace std;
int func(int n){
    if((n&7)==0)
    return 1;
    else
    return -1;
}
int main()
 {
	//code
/*https://practice.geeksforgeeks.org/problems/check-if-a-number-is-divisible-by-8/0/ */
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=0;
	    if(s.size()<=3)
	    n=stoi(s);
	    else{
	    
	    for(int i=s.size()-3;i<s.size();i++){
	        n=n*(10)+(s[i]-'0');}
	    }
	    cout<<func(n)<<endl;
	}
	return 0;
}