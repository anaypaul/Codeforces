#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    bool same= true;
    for(int i = --k; i<n && same ; i++){
        same = arr[i]==arr[k];
    }

    if(!same){
        cout<<"-1"<<endl;
        return 0;
    }
    int ans = -1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[k]){
            ans = max(ans,i);
        }
    }
    cout<<ans+1<<endl;
    return 0;
}