#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> answer;
    answer.push_back(n);
   
    int m = n - 1;
    for(int i = m; i>=1 ;i--){
        if(n%i==0){
            answer.push_back(i);
            n = i;
            i = n;
        }
    }
    sort(answer.begin(),answer.end());
    for(int i=answer.size()-1; i>=0;i--){
        cout<<answer[i]<<" ";
    }
    return 0;
}