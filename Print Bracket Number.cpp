#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
/*https://practice.geeksforgeeks.org/problems/print-bracket-number/0/*/
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    stack<int> s;
	    int flag=1;
	    for(int i=0;i<str.size();i++){
	        if(str[i]=='('){
	            s.push(flag);
	            cout<<s.top()<<" ";
	            flag++;
	        }
	        else if(str[i]==')'){
	            cout<<s.top()<<" ";
	            s.pop();
	        }
	        else
	        continue;
	    }
	    cout<<endl;
	}
	return 0;
}