#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int, int> > arr(9999999, make_pair(-1,-1));
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(arr[x].second==-1){
            pair<int, int> p = make_pair(1,x);
            arr[x] = p;
        }else{
            arr[x].first = arr[x].first + 1;
        }
    } 
    for(int i = 0;i<arr.size();i++){
        if(arr[i].second != -1){
            cout<<arr[i].second<<" "<<arr[i].first<<endl;
        }
        if(i == 20){break;}
    }
    sort(arr.begin(),arr.end());
    int k;
    cin>>k;
    int x = arr.size()-1;
    while(k>1){
        k--;
        x--;
    }
    cout<<"kth largest occuring number :"<<arr[x].second<<endl;
    return 0;
}