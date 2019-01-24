#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> upper;
    vector<int> lower;
    int rotate = 0;
    int sum_l = 0, sum_u=0;
    for(int i = 0;i<n;i++){
        int u,l;
        cin>>u>>l;
        if((u+l)%2==1){
            rotate=1;
        }
        sum_l += l;
        sum_u += u;
    }
    if(sum_l%2==0 && sum_u%2==0){
        cout<<"0"<<endl;
    }
    else{
        if(sum_l%2==1 && sum_u%2==1 && rotate){
            cout<<"1"<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}