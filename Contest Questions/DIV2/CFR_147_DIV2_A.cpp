#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr;
    int prev_h,prev_m;
    cin>>prev_h>>prev_m;
    int max_cashier = 1;
    int curr_max = 1;
    for(int i = 1;i<n;i++){
        // cout<<"i ="<<i<<endl;
        int h,m;
        cin>>h>>m;
        if(prev_h==h && prev_m == m){
            curr_max++;
        }else{
            curr_max = 1;
        }
        prev_h = h;
        prev_m = m;
        max_cashier = max(max_cashier, curr_max);
        
    }
    cout<<max_cashier<<endl;
    return 0;
}
