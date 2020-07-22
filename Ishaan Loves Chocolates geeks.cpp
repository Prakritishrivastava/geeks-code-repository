
#include <iostream>
using namespace std;

int main() {
/* /practice.geeksforgeeks.org/problems/ishaan-loves-chocolates/0 */
	//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int l=0,r=n-1;
	    while(l!=r){
	        if(arr[l]>arr[r])
	        l++;
	        else r--;
	    }
	    cout<<arr[l]<<endl;
	}
	return 0;
}