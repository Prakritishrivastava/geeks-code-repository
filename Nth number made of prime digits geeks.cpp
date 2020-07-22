
#include <iostream>
using namespace std;
bool func(int n){
    int copy=n;
    int count=0;
    while(copy!=0){
        int check=copy%10;
        if(check!=2&&check!=3&&check!=5&&check!=7)
        {
            return false;
            
        }
        
        copy=copy/10;
    }
    return true;
}
int main() {
/*//practice.geeksforgeeks.org/problems/nth-number-made-of-prime-digits/0*/
	//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    int n;
	    cin>>n;
	    int i=2;
	    int count=0;
	    while(count<n){
	        if(func(i))
	        count++;
	        i++;
	    }
	    cout<<i-1<<endl;
	}
	return 0;
}