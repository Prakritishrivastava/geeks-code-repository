
#include<bits/stdc++.h>
using namespace std;
int func(int n){
    if(n==1)
    return 1;
    if(n%2==0)
    return func(n/2)+1;
    else
    return func(n-1)+1;
}
int main()
 {
/*//practice.geeksforgeeks.org/problems/find-optimum-operation/0*/
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<func(n)<<endl;
	}
	return 0;
}