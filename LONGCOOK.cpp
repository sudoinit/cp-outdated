#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int dayofweek(int d, int m, int y)  
{  
    static int t[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
    y -= m < 3;  
    return ( y + y / 4 - y / 100 +  
             y / 400 + t[m - 1] + d) % 7;  
}  

bool isLeap(int year)  
{    
    if (year % 400 == 0)  
        return true;  
  
    if (year % 100 == 0)  
        return false;  
    if (year % 4 == 0)  
        return true;  
    return false;  
} 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;	cin>>t;
	while(t--){
		int m1,y1,m2,y2;
		ll ans=0;
		cin>>m1>>y1;
		cin>>m2>>y2;
		if(m1>2)
			y1++;
		if(m2==1)
			y2--;
		ll count=0;
		ll y;
		for(y=y1;y<=y2;y++){
				count++;
				if(dayofweek(1,2,y)==6)
					ans++;
				else if(dayofweek(1,2,y)==0 && !isLeap(y))
					ans++;
				if(count==400)
					break;
			}
		if(y<y2){
			int a=(y2-y)/400;
			ans*=(a+1);
			y1=y+400*a;
			for(y=y1+1;y<=y2;y++){
				if(dayofweek(1,2,y)==6)
					ans++;
				else if(dayofweek(1,2,y)==0 && !isLeap(y))
					ans++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}