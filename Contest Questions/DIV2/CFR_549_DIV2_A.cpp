#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int left = 0;
    int right = 0;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(x==0) left++;
        else right++;
        arr.push_back(x);
    }
    int res = -1;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]==0){
            left--;
        }else{
            right--;
        }
        if(left == 0 || right==0){
            res = i+1;
            break;
        }
    }
    cout<<res;
    return 0;
}