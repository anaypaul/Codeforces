#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2){
    return ((p1.first>p2.first) || (p1.first==p2.first && p1.second< p2.second));
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int> > arr;
    for(int i = 0;i<n;i++){
        int p,t;
        cin>>p>>t;
        arr.push_back(make_pair(p,t));
    }
    sort(arr.begin(),arr.end(), compare);
    
    vector<int> rank;
    vector<int> position;
    int curr_rank = 1;
    int curr_position = 1;
    for(int i = 0;i<n;i++){
        // cout<<arr[i].first<<" "<<arr[i].second<<endl;
        if(i==0){
            rank.push_back(curr_rank);
            position.push_back(curr_position);
        }else{
            if(arr[i-1].first == arr[i].first && arr[i-1].second == arr[i].second){
                curr_position++;
                rank.push_back(curr_rank);
                position.push_back(curr_position);
            }else{
                curr_position++;
                curr_rank++;
                rank.push_back(curr_rank);
                position.push_back(curr_position);
            }
        }
    }
    int ans = 0;
    int x = rank[k-1];
    for(int i = 0;i<rank.size();i++){
        if(x==rank[i]){
            ans++;
        }
    }
    cout<<"final answer:"<<ans<<endl;
    return 0;
}