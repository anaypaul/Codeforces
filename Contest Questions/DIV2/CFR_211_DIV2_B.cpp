#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    vector<long long int> dp;
    vector<long long int> arr;
    for(long long int i = 0;i<n;i++){
        long long int x;
        cin>>x;
        arr.push_back(x);
    }
    long long int min = 99999999;
    long long int min_index = -1;
    int i = 0;
    int sum_ = 0;
    while(i<k){
        sum_ += arr[i];
        i++;
    }
    min_index = 1;
    if(sum_ < min){
        min = sum_;
    }    
    for(;i<n;i++){
        sum_ = sum_ - arr[i-k] + arr[i];
        dp.push_back(sum_);
        if(sum_ < min){
            min = sum_;
            min_index = i+1-k + 1;
        }
    }
    // cout<<min<<endl;
    cout<<min_index<<endl;
   return 0;
}