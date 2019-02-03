#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int, int> > arr;
    for(int i = 0; i<n;i++){
        int a, q;
        cin>>a>>q;
        pair<int,int> p = make_pair(a,q);
        arr.push_back(p);
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    // for(int i = 0;i<n;i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
    // }
    int ans = 0;
    for(int i = 1;i<n;i++){
        
        if(arr[i-1].second < arr[i].second){
            ans = 1;
            // cout<<"breaking"<<endl;
            break;
        }
    }
    if(ans == 1){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}