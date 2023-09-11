#include<bits/stdc++.h>
using namespace std;

/*int a[100],n,s,res=INT_MAX;

void Try(int i,int sum,int pos){
	for(int j=pos;j<=n;j++){
		if(sum+a[j]<=s){
			++i;
			sum+=a[j];
			if(sum==s){
				res=min(res,i);				b1:tong bang s
			}
			else Try(i,sum+a[j],j+1);
			sum-=a[j];
			--i;
		}
	}
} */

//int a[100],x[100],n;
//vector<string> v;
//
//void Try(int i,int pos){
//	for(int j=pos;j<=n;j++){
//		if(x[i-1]<a[j]){
//			x[i]=a[j];
//			if(i>1){
//				string res="";
//				for(int j=1;j<=i;j++){
//					res+=to_string(x[j]) +" ";			//b2: sap xep 
//				}
//				v.push_back(res);
//			}
//			Try(i+1,j+1);
//		}
//	}
//}


int a[100],n,m,k=3,x[100],res=0;
void inp(){
		cin>>n>>m;
    	for(int i=1;i<=n;i++) cin>>a[i];
}
void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			int sum=0;
			for(j=1;j<=k;j++){
				sum+=a[x[j]];
			}
			if(sum<=m){
				res=max(res,sum);
			}
		}
		else Try(i+1);
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	inp();
    	Try(1);
    	cout<<res;
	}
}