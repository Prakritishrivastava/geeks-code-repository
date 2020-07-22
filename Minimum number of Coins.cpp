
#include<bits/stdc++.h>
using namespace std;
int main()
 {
/* https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins/0/ */
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[]={2000,500,200,100,50,20,10,5,2,1};
	    int num=n;
	    int i=0;
	    while(num>=0&&i<10){
	        if(num>=arr[i])
	        {
	            cout<<arr[i]<<" ";
	            num-=arr[i];
	        }
	        else
	        i++;
	    }
	    cout<<endl;
	}
	return 0;
}
