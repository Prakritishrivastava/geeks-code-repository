
#include <iostream>
#include<math.h>
using namespace std;

int modExp(int a, int b, int c){
    if(b==0)
        return 1;
    return (a*modExp(a,b-1,c))%c;
}

int main() {
/*https://practice.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers/0/*/
	//code
	int t;
	long long int a,b,c;
	
	cin>>t;
	for(int k=0;k<t;k++){
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    cout<<modExp(a,b,c)<<endl;
	}
	return 0;
}