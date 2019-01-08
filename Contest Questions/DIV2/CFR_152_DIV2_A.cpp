#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int left_ones = 0;
    int left_zeros = 0;
    int right_zeros = 0;
    int right_ones = 0;
    for(int i = 0 ;i<n;i++){
        int l,r;
        cin>>l>>r;
        if(l==1){left_ones++;}
        else{left_zeros++;}
        if(r==1){right_ones++;}
        else{right_zeros++;}
    }
    int min_l = left_ones < left_zeros ? left_ones : left_zeros;
    int min_r = right_ones < right_zeros ? right_ones : right_zeros;
    cout<<min_l+min_r<<endl;
    return 0;
}