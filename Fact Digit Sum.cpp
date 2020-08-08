#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    int prod=1;
    for(int i=1;i<=n;i++){
        prod=prod*i;
    }
    return prod;
}
string func(long long x){
    string str="";
    int n=x;
    int f;
    for(int i=9;i>=1;i--){
        f=n/fact(i);
        for(int j=0;j<f;j++)
        str+=to_string(i);
        n=n%fact(i);
    }
    return str;
}
int main()
 {
/*https://practice.geeksforgeeks.org/problems/fact-digit-sum/0/ */
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int x;
	    cin>>x;
	    string str=func(x);
	    sort(str.begin(),str.end());
	    cout<<str<<endl;
	}
	return 0;
}