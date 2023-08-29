#include<bits/stdc++.h>

using namespace std;
int n,k,a[1001],ans ,s=0;
int used[1001];
void Try(int sum,int cnt){
	if(cnt==k){
		ans=1;
		return;
	}
	if(ans) return;
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			used[j]=1;
			if(sum==s){
				Try(0,cnt+1);
			}
			else if(sum<s){
				Try(sum+a[j],cnt);
			}
		}
		used[j]=0;
	}
}

void inp(){
	cin>>n>>k;
	s=0;ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i];
	}
	if(s%k){
		cout<<0<<endl;
		return;
	}
	s/=k;
	Try(0,0);
	cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		inp();
	}
	
}