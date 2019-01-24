#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> left;
    vector<int> right;
    
    for(int i = 0;i<2*n;i++){
        if(i<n){
            left.push_back(s[i]-'0');
        }else{
            right.push_back(s[i]-'0');
        }
    }
    sort(left.begin(),left.end());
    sort(right.begin(), right.end());
    bool flag = true;
    for(int i = 0;i<n;i++){
        if(left[i] <= right[i]){
            flag = false;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        return 0;
    }
    flag = true;
    for(int i = 0;i<n;i++){
        if(left[i]>=right[i]){
            flag = false;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}