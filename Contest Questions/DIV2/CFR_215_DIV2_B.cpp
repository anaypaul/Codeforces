#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
    set<long long int> s;
    long long int n,m;
    cin>>n>>m;
    vector<long long int> arr;
    for(long long int i = 0;i<n;i++){
        long long int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<long long int> dp(n);
    dp[n-1] = 1;
    s.insert(arr[n-1]);
    for(long long int i = n-2; i>=0 ;i--){
        if(s.find(arr[i]) == s.end()){
            s.insert(arr[i]);
            dp[i] = 1 + dp[i+1];
        }else{
            dp[i] = dp[i+1];
        }
    }
    for(int i =0;i<m;i++){
        int l;
        cin>>l;
        cout<<dp[l-1]<<endl;
    }
    return 0;
}