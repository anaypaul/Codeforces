#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n;
    cin>>n;
    vector<long long int> arr;
    vector<long long int> dp;
    dp.push_back(0);
    long long int sum = 0;
    for(long long int i =0;i<n;i++){
        long long int x;
        cin>>x;
        arr.push_back(x);
        sum += x;
        dp.push_back(sum);
    }

    // for(long long int i =0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(long long int i =0; i<dp.size();i++){
    //     cout<<dp[i]<<" ";
    // }
    // cout<<endl;
    vector<long long int> sorted_sum;
    sorted_sum.push_back(0);
    sum=0;
    vector<long long int> arr2(arr);
    sort(arr2.begin(),arr2.end());
    for(int i = 0;i<arr2.size();i++){
        sum += arr2[i];
        sorted_sum.push_back(sum);
    }
    // for(long long int i =0;i<arr.size();i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;
    // for(long long int i =0; i<sorted_sum.size();i++){
    //     cout<<sorted_sum[i]<<" ";
    // }
    int q;
    cin>>q;
    for(long long int i = 0;i<q;i++){
        long long int type, l,r;
        cin>>type>>l>>r;
        if(type==1){
            cout<<dp[r]-dp[l-1]<<endl;
        }else if(type==2){
            cout<<sorted_sum[r]-sorted_sum[l-1]<<endl;
        }
    }
    return 0;
}
