que:https://practice.geeksforgeeks.org/problems/subarray-with-0-sum/0
solution:
#include <bits/stdc++.h>
using namespace std;
bool func(int arr[],int n){
    int count=0;
    int sum=0;
    map<int,int> m;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
        count++;
        }
        if(m.find(sum)!=m.end())
        count+=m[sum];
        m[sum]++;
    }
    if(count==0)
    return false;
    else
    return true;
}
int main() {
/* //practice.geeksforgeeks.org/problems/subarray-with-0-sum/0*/
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    if(func(arr,n))
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
