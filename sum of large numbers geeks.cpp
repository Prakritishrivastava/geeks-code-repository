
#include <bits/stdc++.h>
using namespace std;
int dig(int n){
    int copy=n;
    int count=0;
    while(copy!=0){
        copy=copy/10;
        count++;
        
    }
    return count;
}
int main() {
/*https://practice.geeksforgeeks.org/problems/sum-of-numbers-or-number/0/*/
	//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    string s1,s2;
	cin>>s1;
	cin>>s2;
	int n=max(s1.size(),s2.size())+2;
	int a[n]={0};
	int b[n]={0};
	int c[n]={0};
	int d[n]={0};
	int j=n-1;
	for(int i=s1.size()-1;i>=0;i--){
		a[j]=s1[i]-'0';
		j--;
	}
	int k=n-1;
	for(int i=s2.size()-1;i>=0;i--){
		b[k]=s2[i]-'0';
		k--;
	}
	for(int i=n-1;i>=0;i--){
		d[i]=(c[i]+a[i]+b[i])%10;
		c[i-1]=(a[i]+b[i]+c[i])/10;
	}
	int ans;
	for(int i=0;i<n;i++){
		if(d[i]>0){
		ans=i;
			break;
		}
	}
	string str="";
	for(int i=ans;i<n;i++){
		str=str+to_string(d[i]);
	}
	if(str.size()==s1.size())
	cout<<str<<endl;
	else
	cout<<s1<<endl;
	}
	return 0;
}