#include<bits/stdc++.h>
using namespace std;
int main()
 {
/* https://practice.geeksforgeeks.org/problems/closing-bracket-index/0/ */
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int index;
	    cin>>index;
	    int count=0;
	    for(int i=0;i<index;i++){
	        if(str[i]=='[')
	        count++;
	    }
	    stack<char> s;
	    int ans;
	    int x=0;
	    for(int i=0;i<str.size();i++){
	       if(str[i]=='['){
	       s.push(x);
	           x++;
	       }
	       else if(str[i]==']'){
	           if(s.top()==count){
	          ans=i;
	          break;
	       
	       }
	       s.pop();}
	       
	    }
	    cout<<ans<<endl;
	}
	return 0;
}