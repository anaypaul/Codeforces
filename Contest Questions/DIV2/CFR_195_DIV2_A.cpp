#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int x1,y1,x2,y2;
    cout<<sqrt(2*(x*x+y*y))<<endl;
    int val = (int)floor(sqrt(2*(x*x+y*y))-0.5);
    if(x>=0 && y>=0){
        x1 = 0;
        y1 = val;
        x2 = val;
        y2 = 0;
    }else if(x<=0 && y>=0){
        x1 = -1 * val;
        y1 = 0;
        y2 = val;
        x2 = 0;
    }else if(x<=0 && y<=0){
        x1 = -1 * val;
        x2 = 0;
        y2 = -1 * val;
        y1 = 0;
    }else if(x>=0 && y<=0){
        x2 = val;
        x1 = 0;
        y1 = -1 * val;
        y2 = 0;
    }
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    return 0;
}