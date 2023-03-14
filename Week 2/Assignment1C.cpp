#include <bits/stdc++.h>
using namespace std; 

struct PhanSo{ 
    double x, y; 
}; 

void TinhToan(PhanSo a, PhanSo b){
    double m= a.x * b.y; 
    double n= b.x * a.y; 
    double p= a.y * b.y; 
    cout<<"Tong 2 phan so: "<<(m+n)<<"/"<<p<<endl; 
    cout<<"Hieu 2 phan so: "<<(m-n)<<"/"<<p<<endl; 
    cout<<"Tich 2 phan so: "<<(a.x * b.x)<<"/"<<(a.y * b.y)<<endl; 
    cout<<"Thuong 2 phan so: "<<(a.x * b.y)<<"/"<<(a.y * b.x)<<endl; 
}
void Solve(){ 
    PhanSo a, b; 
    cin>>a.x>>a.y>>b.x>>b.y; 
    TinhToan(a, b); 
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
