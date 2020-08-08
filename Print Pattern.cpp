#include<bits/stdc++.h>
using namespace std;
int func(int n){
    if(n<=0){
        cout<<n<<" ";
    return n;}
    cout<<n <<" ";
    func(n-5);
    cout<<n <<" ";
}
int main()
 {
	//code
/*https://practice.geeksforgeeks.org/problems/print-pattern/0 */
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    func(n);
	    cout<<endl;
	}
	return 0;
}