#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > segments;
    for(int i = 0;i<n;i++){
        int l,r;
        cin>>l>>r;
        segments.push_back(make_pair(l,r));
    }
    
    return 0;
}