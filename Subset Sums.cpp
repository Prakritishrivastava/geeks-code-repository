#include<bits/stdc++.h>
using namespace std;
vector<int> func(int arr[],int n){
    vector<int> v;
    if(n==0)
    {
        
        v.push_back(0);
        return v;
    }
    vector<int> temp=func(arr,n-1);
    vector<int> t2;
    
    for(int i=0;i<temp.size();i++){
    t2.push_back(temp[i]+arr[n-1]);
    }
    temp.insert(temp.end(),t2.begin(),t2.end());
    return temp;
    
}
int main()
 {
	//code
/*https://practice.geeksforgeeks.org/problems/subset-sums/0*/
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    vector<int> v=func(arr,n);
	    sort(v.begin(),v.end());
	    for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}