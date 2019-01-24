#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> dp(5000,0);
    dp[a] = dp[b] = dp[c] = 1;
    for(int i = 1;i<=n;i++){
        if(dp[i]==0 && i!=0){
            continue;
        }
        if(i+a<=n){
            dp[i+a] = max(dp[i+a], 1+dp[i]);
        }
        if(i+b<=n){
            dp[i+b] = max(dp[i+b], 1+dp[i]);
        }
        if(i+c<=n){
            dp[i+c] = max(dp[i+c], 1+dp[i]);
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}