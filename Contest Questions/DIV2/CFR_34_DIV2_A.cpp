#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int ans_i,ans_j;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int min_diff = abs(arr[0]-arr[n-1]);
    ans_i = 0;
    ans_j = n-1;
    for(int i = 0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1]) < min_diff){
            min_diff = abs(arr[i]-arr[i+1]);
            ans_i = i;
            ans_j = i+1;
        }
    }
    cout<<ans_i+1<<" "<<ans_j+1<<endl;
    return 0;
}