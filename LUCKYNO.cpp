#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;	cin>>t;
	while(t--){
		string s;	cin>>s;
		sort(s.begin(),s.end());
		int n=s.length();
		bool flag=true;
		for(int i=0;i<n-1;i++){
			if(s[i+1]-s[i]>2){
				flag=false;
				break;
			}
		}
		if(flag){
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	}	
	return 0;
}