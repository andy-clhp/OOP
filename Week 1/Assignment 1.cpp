#include <bits/stdc++.h>
using namespace std; 

void Solve1a(){
    int n; int a[1000]; 
    cin>>n; 
    for(int i=0; i<n; ++i) cin>>a[i]; 
    sort(a, a+n); 
    for(int i=0; i<n; ++i) cout<<a[i];  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     
    int q = 1; 
    //cin >> q; 
    while(q--){
        Solve1a(); 
    }
    return 0; 
}
