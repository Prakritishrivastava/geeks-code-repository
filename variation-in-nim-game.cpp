#include<bits/stdc++.h>
using namespace std;
int func(int arr[],int n){
    map<int,int> mp;
    for(int i=0;i<n;i++)
    mp[arr[i]]++;
    int count=0;
    for(auto i=mp.begin();i!=mp.end();i++){
        count+=(i->second)%2;
    }
    return count;
}

int main()
 {
/*https://practice.geeksforgeeks.org/problems/variation-in-nim-game/0*/
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int ans=func(arr,n);
	    if(ans%2==1)
	    cout<<2<<endl;
	    else
	    cout<<1<<endl;
	}
	return 0;
}