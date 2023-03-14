// 2A: Gia dinh rang ngay nhap la dung. 
#include <bits/stdc++.h>
using namespace std; 

void NgayTiepTheo(int d, int m, int y){
    // Nam nhuan chia het cho 4 nhung khong chia het cho 100. 
    if(y%4 == 0 && y%100 != 0 && d== 29 && m== 2){
            d= 1; m++; 
    } else{
        // TH dac biet cua thang 2 va thang 12. 
        if(d== 28 && m== 2){
            d= 1; m++; 
        } else if(d== 31 && m == 12){ 
            d= 1; m= 1; y++; 
        }
        //Giai quyet nhung thang khong dac biet. 
        else if(m== 1|| m== 3|| m== 5|| m== 7 || m== 8|| m== 10){
            if(d == 31){
                d= 1; m++; 
            } else d++; 
        } else if(m== 4|| m== 6|| m== 9|| m== 11){
            if(d== 30){ 
                d= 1; m++; 
            } else d++; 
        } 
        // Giai quyet nhung thang con lai cua thang 2 va 12. 
        else {
            d++;
        }
    }
    cout<<"Ngay tiep theo: "<<d<<"/"<<m<<"/"<<y<<endl; 
}
void Solve(){
    int d, m, y; 
    cin>>d>>m>>y; 
    NgayTiepTheo(d, m, y); 
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
