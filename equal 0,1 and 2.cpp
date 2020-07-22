
#include <bits/stdc++.h>
using namespace std;
bool func(string str){
    int o=0,t=0,z=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0')
        z++;
        else if(str[i]=='1')
        o++;
        else if(str[i]=='2')
        t++;
    }
    if(o==z&&z==t)
    return true;
    else
    return false;
}
int main() {
/* https://practice.geeksforgeeks.org/problems/equal-0-1-and-2/0 */
	//code
	int t;
	cin>>t;
	
	while(t--){
	    string str;
	    cin>>str;
	    int count=0;
	    int n=str.size();
       for(int j=3;j<=n;j+=3){
           for(int i=0;i<=n-j;i++){
               string x=str.substr(i,j);
               
               if(func(x))
               count++;
           }
           
       }
       cout<<count<<endl;
	}
	return 0;
}