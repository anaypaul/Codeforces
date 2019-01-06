#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int s, n;
    cin>>s>>n;
    pair<int, int> arr[n];
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        arr[i].first = x;
        arr[i].second = y;
    }
    sort(arr, arr+n);
    for(int i = 0 ; i<n;i++){
        if( s <= arr[i].first){
            cout<<"NO";
            return 0;
        }else{
            s = s + arr[i].second;
        }
    }
    cout<<"YES";
    return 0;
}