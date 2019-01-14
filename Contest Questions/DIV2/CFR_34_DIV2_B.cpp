#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    int earn = 0;
    for(int i=0;i<m;i++){
        if(arr[i] <=0){
            earn += abs(arr[i]);
        }
    }
    cout<<earn<<endl;
    return 0;
}
