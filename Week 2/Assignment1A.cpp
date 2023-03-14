#include <bits/stdc++.h>
using namespace std; 

int gcd(int a, int b){ 
    a= abs(a); b= abs(b); 
    while(a != 0 && b != 0){ 
        (a>b) ? a = a%b : b = b%a; 
    }
    int t=0; 
    (a>b) ? t =a: t =b; 
    return t; 
}

void RutGon(int a, int b){ 
    int t= gcd(a, b); 
    a= a/ t; 
    b= b/ t;  
    cout<<a<<"/"<<b; 
}
void Solve(){ 
    int a,b; cin>>a>>b; 
    RutGon(a, b); 
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
