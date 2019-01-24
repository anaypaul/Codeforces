#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<long long int> passed;
    vector<long long int> failed;
    long long int min1 = 99999999;
    long long int max1 = -1;
    long long int min2 = 99999999;
    for(int i = 0; i<n;i++){
        int x;
        cin>>x;
        passed.push_back(x);
        if(x < min1){
            min1 = x;
        }
        if(x> max1){
            max1 = x;
        }
    }
    for(int i = 0; i<m;i++){
        int x;
        cin>>x;
        failed.push_back(x);
        if(x < min2){
            min2 = x;
        }
    }
    // cout<<"min1 = "<<min1<<" max1 = "<<max1<<endl;
    // cout<<"min2 = "<<min2<<endl;
    vector<long long int> answers;
    for(int i = max1;i<min2;i++){
        if(min1*2 <= i){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

    return 0;
}