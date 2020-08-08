#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
/*https://practice.geeksforgeeks.org/problems/xor-of-two-numbers-after-making-length-of-their-binary-representations-equal/0*/
	int t;
	cin>>t;
	while(t--){
	    long long int a,b;
	    cin>>a>>b;
	    int bitsa=log2(a)+1;
	    int bitsb=log2(b)+1;
	    if(a<b)
	    {
	        a=a*pow(2,(bitsb-bitsa));
	    }
	    else
	    b=b*pow(2,(bitsa-bitsb));
	    cout<<(a^b)<<endl;
	}
	return 0;
}