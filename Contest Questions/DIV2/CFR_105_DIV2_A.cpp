#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums;
    int d;
    for(int i = 0; i<4;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cin>>d;
    int answer = 0;
    vector<int> isKilled(d+1, 0);
    for(int x : nums){
        int j = 1;
        while(j*x<d+1){
            isKilled[j*x] = 1;
            j++;
        }
    }
    for(int i = 0;i<isKilled.size();i++){
        if(isKilled[i] == 1){
            answer+=1;
        }
    }
    cout<<answer<<endl;
    return 0;
}