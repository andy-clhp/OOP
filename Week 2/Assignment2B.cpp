#include <bits/stdc++.h>
using namespace std; 

struct ThongTinSV{
    string name; 
    double x, y; 
}; 

void Solve(){
    ThongTinSV a; 
    getline(cin, a.name); 
    cin>>a.x>>a.y; 
    double t = (a.x + a.y) / 2; 
    cout<<"Ho va ten: "<<a.name<<endl; 
    cout<<"Diem trung binh: "<<t; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     
    int q = 1; 
    //cin >> q; 
    while(q--){
        Solve();
    }
    return 0; 
}
