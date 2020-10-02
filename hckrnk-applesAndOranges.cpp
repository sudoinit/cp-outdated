
#include<iostream>
#include<vector>
#include<algorithms>

using namespace std;


int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }

    
    long int app = 0;
    long int orn = 0;
    
    for(int i = 0; i < m; i++){apple[i] += a; if(apple[i] >= s && apple[i] <= t){app++;};}
    for(int i = 0; i < n; i++){orange[i] += b; if(orange[i] >= s && orange[i] <= t){orn++;};}
    
    cout << app << endl;
    cout << orn << endl;
    return 0;
}



