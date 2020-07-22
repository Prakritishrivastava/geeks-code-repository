
#include<bits/stdc++.h>
using namespace std;
int main()
 {
/* //practice.geeksforgeeks.org/problems/largest-number-with-given-sum/0 */
	//code
	int t;
	cin>>t;
	while(t--){
	    int dig,sum;
	    cin>>dig;
	    cin>>sum;
	    if(sum>dig*9)
	    cout<<-1<<endl;
	    else{
	    string str="";
	    int nine=sum/9;
	    for(int i=0;i<nine;i++)
	    str=str+to_string(9);
	    if(nine<dig){
	    str=str+to_string(sum%9);
	    for(int i=str.size();i<dig;i++)
	    str+=to_string(0);}
	    cout<<str<<endl;
	        
	    }
	}
	return 0;
}