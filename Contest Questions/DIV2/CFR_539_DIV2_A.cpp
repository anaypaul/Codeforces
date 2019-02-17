#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n,v;
    cin>>n>>v;
    int amount = 0;
    int curr = 1;
    int cap = 0;
    if(v<n-curr){
        amount += 1*v;
        cap = 1*v;
        curr++;
        cap = cap -1;
    }else if(v>=n-curr){
        amount += 1*(n-1);
        cap = 1*v;
        curr = n;
        cap = cap - v;
    }
    while(curr<n){
        if(v < n-curr){
            amount += curr * (v-cap);
            cap += v-cap;
            curr = curr+1;
            cap--;
        }else{
            amount += curr*(v-cap);
            cap += v-cap;
            curr = curr +v;
            cap = cap -v;
            break;
        }
    }
    cout<<amount<<endl;
    return 0;
}