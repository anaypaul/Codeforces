#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int min_l = 9999999999;
    long long int max_r =-9999999999;
    cout<<"min: "<<min_l<<endl;
    vector<pair<long long int,long long int> > segments;
    for(long long int i = 0;i<n;i++){
        long long int l,r;
        cin>>l>>r;
        if(l < min_l ){
            min_l = l;
        }
        if(r > max_r){
            max_r = r;
        }
        segments.push_back(make_pair(l,r));
    }
    // cout<<min_l<<" "<<max_r<<endl;
    for(int i = 0;i<segments.size();i++){
        if(segments[i].first <= min_l &&  segments[i].second >= max_r){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}