
#include<bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
    if(a>b)
    return b;
    else
    return a;
}
int main()
 {
/* //practice.geeksforgeeks.org/problems/smallest-number/0/ */
	//code
	int t;
	cin>>t;
	while(t--){
	    int s,d;
	    cin>>s;
	    cin>>d;
	    int arr[d];
	    if(s>d*9)
	    cout<<-1<<endl;
	    else if(d==1)
	    cout<<s<<endl;
	    else{
	        arr[0]=1;
	        s--;
	        for(int i=1;i<d-1;i++)
	        arr[i]=0;
	        
	        if(s<=9){
	        arr[d-1]=s;
	            s=0;
	        }
	        else{
	        arr[d-1]=9;
	            s=s-9;
	        }
	        int i=d-2;
	        while(s>=0){
	           
	            int k=min(s,9-arr[i]);
	            s=s-k;
	            arr[i]=arr[i]+k;
	            i--;
	            
	        }
	        for(int i=0;i<d;i++)
	        cout<<arr[i];
	        cout<<endl;
	        
	    }
	}
	return 0;
}