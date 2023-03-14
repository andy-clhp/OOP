#include <bits/stdc++.h>
using namespace std; 

struct PhanSo{ 
    double x, y; 
}; 

void SoSanh(PhanSo a, PhanSo b){
    double m= a.x / a.y; 
    double n= b.x / b.y; 
    if(m >= n){
        cout<<"Phan so lon nhat: "<<a.x<<"/"<<a.y; 
    }
    else cout<<"Phan so lon nhat: "<<b.x<<"/"<<b.y; 
}
void Solve(){ 
    PhanSo a, b; 
    cin>>a.x>>a.y>>b.x>>b.y; 
    SoSanh(a, b); 
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
