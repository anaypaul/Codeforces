#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int s  = (n*(n+1))/2;
    m = m%s;
    for(int i = 1;i<=n;i++){
        if(m<i){
            cout<<m<<endl;
            return 0;
        }else{
            m = m - i;
        }
    }
    return 0;
}