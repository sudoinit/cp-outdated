#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool valid(ll k,ll n){
	ll count=0;
	ll temp=n;
	while(temp!=0){
		if(k<temp){
			count+=k;
			temp-=k;
			if(count>=n/2)
				return true;
			temp=temp-temp/10;
		}
		else{
			count+=temp;
			temp=0;
			if(count*2>=n)
				return true;
		}
	}
	return 0;
}	

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;cin>>n;
	ll low=1;
	ll high=n;
	ll mid;
	while(low<=high){
		mid=(low+high)/2;
		if(valid(mid,n))
			high=mid-1;
		else
			low=mid+1;
	}
	cout<<low<<"\n";
	return 0;
}