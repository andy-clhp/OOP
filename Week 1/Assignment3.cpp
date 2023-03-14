#include <bits/stdc++.h>
using namespace std; 

struct Point{
        double x, y; 
 }; 

double Distance(double x1, double y1, double x2, double y2){
        return ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

Point b[100]; 

void Setdiem(Point &a, int x=0, int y=0){
    a.x=x; 
    a.y=y;
}
void Solve2(){ 
    int n; cin>>n; 
    for(int i=0; i<n; ++i){
        int x,y; cin>>x>>y;
        if(i%3==0) Setdiem(b[i], x, y); 
        if(i%3==1) Setdiem(b[i], x);
        if(i%3==2) Setdiem(b[i]);
    }
    for(int i=0; i<n; ++i)
        cout<<"("<<b[i].x<<","<<b[i].y<<")"<<'\n';
    double ans=0; int x,y;
    for(int i=0; i<n-1; ++i){
        for(int j=i+1; j<n; ++j){
            if(ans <= Distance(b[i].x, b[i].y, b[j].x, b[j].y)){
                x=i; y=j; ans = Distance(b[i].x, b[i].y, b[j].x, b[j].y); 
            }
        }
        cout<<"Toa do 2 diem co khoang cach xa nhat: "<<" "; 
        cout<<"("<<b[x].x<<","<<b[x].y<<")"<<" "<<"("<<b[y].x<<","<<b[y].y<< ")";
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     
    int q = 1; 
    //cin >> q; 
    while(q--){
        Solve2();
    }
    return 0; 
}
