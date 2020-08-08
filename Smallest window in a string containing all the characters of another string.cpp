#include<bits/stdc++.h>
using namespace std;
string func(string s,string pat){
	map<char,int> hs;
	map<char,int> hp;
	for(int i=0;i<pat.size();i++)
	hp[pat[i]]++;
	int count=0,start_index=-1,l=0;
	int min=10001;
	for(int j=0;j<s.size();j++){
		hs[s[j]]++;
		if(hp.find(s[j])!=hp.end()&&hs[s[j]]<=hp[s[j]])
		count++;
		if(count==pat.size()){
			while(hs[s[l]]>hp[s[l]]||hp.find(s[l])==hp.end())
			{
				if(hs[s[l]]>hp[s[l]])
				hs[s[l]]--;
				l++;
			}
			int len=j-l+1;
			if(len<min)
			{
				min=len;
				start_index=l;
			}
		}
	}
	if(start_index==-1)
	return "-1";
	else
	return s.substr(start_index,min);
}
int main()
 {
	//code
/*s://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string/0 */
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<func(s1,s2)<<endl;
	}
	return 0;
}