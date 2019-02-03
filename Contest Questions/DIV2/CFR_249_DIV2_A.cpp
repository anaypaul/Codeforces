#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check(vector<int> arr){
    int ans = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]>0){
            ans = 1;
            return ans;
        }
    }
    return ans ;
}
int main(){
    int n,m;
    int buses=0;
    cin>>n>>m;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    for(int i =0;i<n;){
        int cap = m;
        while(cap>= arr[i]){
            cap = cap - arr[i];
            i++;
        }
        buses++;
    }
    cout<<buses<<endl;
    return 0;
}