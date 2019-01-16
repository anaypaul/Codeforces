#include<vector>
#include<algorithm>
#include<iostream>
#include<utility>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int, int> >arr;
    for(int i = 0;i<n;i++){
        int x,y;
        cin>>x>>y;
        pair<int,int> m;
        m = make_pair(x,y);
        arr.push_back(m);
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
        int f1 = 0,f2=0,f3=0,f4=0;
        for(int j = 0;j<n;j++){
            if(arr[i].first==arr[j].first){
                if(arr[i].second < arr[j].second){
                    f1 = 1;
                }else if(arr[i].second > arr[j].second){
                    f3 = 1;
                }
            }else if(arr[i].second == arr[j].second){
                if(arr[i].first < arr[j].first){
                    f2 = 1;
                }else if(arr[i].first > arr[j].first){
                    f4 = 1;
                }
            }
            if(f1==1 &&f2==1 && f3==1 && f4==1){
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}