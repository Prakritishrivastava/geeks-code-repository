#include<bits/stdc++.h>
using namespace std;
string func(string s,string pat){
	int hs[26]={0};
	int hp[26]={0};
	for(int i=0;i<pat.size();i++)
	hp[pat[i]-'a']++;
	int count=0,start_index=-1,l=0;
	int min=10001;
	for(int j=0;j<s.size();j++){
		hs[s[j]-'a']++;
		if(hp[s[j]-'a']!=0&&hs[s[j]-'a']<=hp[s[j]-'a'])
		count++;
		if(count==pat.size()){
			while(hs[s[l]-'a']>hp[s[l]-'a']||hp[s[l]-'a']==0)
			{
				if(hs[s[l]-'a']>hp[s[l]-'a'])
				hs[s[l]-'a']--;
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
/*https://practice.geeksforgeeks.org/problems/smallest-distant-window/0/ */
	int t;
	cin>>t;
	while(t--){
	    string s1;
	    cin>>s1;
	    unordered_map<char,int> mp;
	    string s2="";
	    for(int i=0;i<s1.size();i++){
	       if(mp.find(s1[i])==mp.end())
	       s2+=s1[i];
	       mp[s1[i]]++;
	    }
	    cout<<func(s1,s2).size()<<endl;
	}
	return 0;
}