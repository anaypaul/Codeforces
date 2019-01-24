#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int> arr;
    for(int i = 1;i<=n;i++){
        long long int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    long long int ans = 0;
    for(int i = 1;i<=n;i++){
        ans += abs(arr[i-1]-i);
    }
    cout<<ans<<endl;
    return 0;
}