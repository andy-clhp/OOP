#include <bits/stdc++.h>
using namespace std; 

struct Point{
        double x, y; 
 }; 

double Distance(double x1, double y1, double x2, double y2){
        return ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

Point b[100]; 

void Solve1b(){ 
    int m; cin>>m; 
    for(int i=0; i<m; ++i) 
        cin>>b[i].x>>b[i].y; 
    double ans=0; int x,y;
    for(int i=0; i<m-1; ++i){
        for(int j=i+1; j<m; ++j){
            if(ans <= Distance(b[i].x, b[i].y, b[j].x, b[j].y)){
                x=i; y=j; ans = Distance(b[i].x, b[i].y, b[j].x, b[j].y); 
            }
        }
        cout<<"("<<b[x].x<<","<<b[x].y<<")"<<" "<<"("<<b[y].x<<","<<b[y].y<< ")";
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     
    int q = 1; 
    //cin >> q; 
    while(q--){
        Solve1b();
    }
    return 0; 
}
