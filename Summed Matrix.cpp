#include<bits/stdc++.h>
using namespace std;
int main()
 {
/*https://practice.geeksforgeeks.org/problems/summed-matrix/0 */
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int ans;
	    long long int n;
	    long long int q;
	    cin>>n;
	    cin>>q;
	    if(q<n)
	    ans=q-1;
	    
	    else{
	    if(q%2==0)
	    ans=2*(n-q/2)+1;
	    else
	    ans=2*(n-q/2);}
	   
	    cout<<ans<<endl;
	}
	return 0;
}