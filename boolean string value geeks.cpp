
#include <iostream>
using namespace std;

int main() {
/*https://practice.geeksforgeeks.org/problems/boolean-string-value/0/ */
	//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    string str;
	    cin>>str;
	    int temp=str[0]-'0';
	    for(int i=1;i<str.size();i+=2){
	        
	            if(str[i]=='A')
	            temp=temp&(str[i+1]-'0');
	            else if(str[i]=='B')
	            temp=temp|(str[i+1]-'0');
	            else if(str[i]=='C')
	            temp=temp^(str[i+1]-'0');
	        
	    }
	    cout<<temp<<endl;
	}
	return 0;
}

