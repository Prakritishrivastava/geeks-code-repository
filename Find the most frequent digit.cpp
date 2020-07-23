#include<bits/stdc++.h>
using namespace std;
char maximum(string str){
    map<char,int> m;
    for(int i=0;i<str.size();i++)
    m[str[i]]++;
    vector<int> v;
    map<char,int> :: iterator itr;
    for(auto itr=m.begin();itr!=m.end();itr++)
    v.push_back(itr->second);
    int max= *max_element(v.begin(),v.end());
    vector<char> temp;
    for(auto itr=m.begin();itr!=m.end();itr++){
        if(itr->second==max)
        temp.push_back(itr->first);
    }
    sort(temp.begin(),temp.end());
    return temp[temp.size()-1];
}
int main()
 {
/*https://practice.geeksforgeeks.org/problems/find-the-most-frequent-digit/0 */
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    cout<<maximum(str)<<endl;
	    
	}
	return 0;
}