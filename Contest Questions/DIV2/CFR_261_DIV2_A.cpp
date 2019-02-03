#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int num  = abs(y1 - y2);
    int den = abs(x2 - x1);
    if(num==den){
        cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2<<endl;
    }else if(num>0 && den==0){
        cout<<x1+num<<" "<<y1<<" "<<x2+num<<" "<<y2<<endl;
    }else if(num==0 && den>0){
        cout<<x1<<" "<<y1+den<<" "<<x2<<" "<<y2+den<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}