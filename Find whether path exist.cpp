#include<bits/stdc++.h>
using namespace std;
#define S 20
bool issafe(int mat[S][S],int r,int c,int i,int j,int vis[S][S]){
    return ((i>=0)&&(i<r)&&(j>=0)&&(j<c)&&(mat[i][j])&&!vis[i][j]);
} 
void dfs(int mat[S][S],int r,int c,int i,int j,int vis[S][S],int &count){
    vis[i][j]=1;
    int row[]={-1,0,0,1};
    int col[]={0,-1,1,0};
    for(int k=0;k<4;k++){
      if(issafe(mat,r,c,i+row[k],j+col[k],vis)){
          if(mat[i+row[k]][j+col[k]]==2)
          count++;
          dfs(mat,r,c,i+row[k],j+col[k],vis,count);
      }  
    }
}
bool func(int mat[S][S],int r,int c){
    int vis[S][S]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]==1&&!vis[i][j]){
                int count=0;
                dfs(mat,r,c,i,j,vis,count);
                if(count!=0)
                return true;
                else
                return false;
            }
        }
    }
}
int main()
 {
/*https://practice.geeksforgeeks.org/problems/find-whether-path-exist/0*/
	//code
	int t;
	cin>>t;
	while(t--){
	    int m;
	    cin>>m;
	   int mat[S][S];
	   for(int i=0;i<m;i++){
	       for(int j=0;j<m;j++){
	           cin>>mat[i][j];
	       }
	   }if(func(mat,m,m))
	   cout<<1<<endl;
	   else
	   cout<<0<<endl;
	   
	}
	return 0;
}