#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> hash(1001,0);
    if(n==1){
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        hash[x]++;
    }
    for(int i = 0;i<1001;i++){
        if(hash[i]> (n+1)/2){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}