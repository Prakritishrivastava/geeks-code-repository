#include<bits/stdc++.h>
using namespace std;
bool func(int arr[],int n,int k){
    if(n%2!=0)
    return false;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]%k]++;
    }
    unordered_map<int,int>::iterator itr;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if(itr->first!=k/2&&itr->first!=0)
        {
            if(mp[itr->first]!=mp[k-itr->first])
            return false;
        }
    }
    if((mp[k/2]%2==0)&&(mp[0]%2==0))
    return true;
    else
    return false;
}
int main()
 {
	//code
/*https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem/0 */
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int k;
	    cin>>k;
	    if(func(arr,n,k))
	    cout<<"True"<<endl;
	    else
	    cout<<"False"<<endl;
	    
	}
	return 0;
}