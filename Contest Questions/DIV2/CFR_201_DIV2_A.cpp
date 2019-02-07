#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    int t = arr[0];
    arr[0] = arr[arr.size()-1];
    arr[arr.size()-1] = t;
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}