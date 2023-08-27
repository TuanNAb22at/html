#include<bits/stdc++.h>

using namespace std;
// chuot di trong me cung
/*int a[100][100],n,ok;
string s;

void Try(int i,int j){
	if(i==n&&j==n){
		cout<<s<<endl;
		ok=1;
	}
	if(i+1<=n&&a[i+1][j]==1){
		s+="D";
		a[i+1][j]=0;
		Try(i+1,j);
		a[i+1][j]=1;
		s.pop_back();
	}
	if(j-1>=1 && a[i][j-1]==1){
		s+="L";
		a[i][j-1]=0;
		Try(i,j-1);
		a[i][j-1]=1;
		s.pop_back();
	}
	if(j+1 <=n && a[i][j+1]){
		s+="R";
		a[i][j+1]=0;
		Try(i,j+1);
		a[i][j+1]=1;
		s.pop_back();
	}
	if(i-1>=1&&a[i-1][j]){
		s+="U";
		a[i-1][j]=0;
		Try(i-1,j);
		a[i-1][j]=1;
		s.pop_back();
	}
} */

//cach 2
/*int a[100][100],n,ok;
string s;
string p="DLRU";
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
void Try(int i,int j){
	if(i==n&&j==n){
		cout<<s<<" ";
		ok=1;
	}
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]){
			s+=p[k];
			a[i1][j1]=0;
			Try(i1,j1);
			a[i1][j1]=1;
			s.pop_back();
		}
	}
} */

// dem mien
int a[100][100],n,m;
int dx[8]={1,0,0,-1};
int dy[8]={0,-1,1,0};
void Try(int i,int j){
	a[i][j]=0;
	for(int k=0;k<8;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]){
			Try(i1,j1);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int cnt=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]){
					++cnt;
					Try(i,j);
				}
			}
		}
		cout<<cnt<<endl;
	}
	
}