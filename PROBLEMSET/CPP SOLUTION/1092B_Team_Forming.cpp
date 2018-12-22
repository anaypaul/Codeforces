#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solution(vector<int> v){
    int n = v.size();
    sort(v.begin(),v.end());
    int i=0;
    int answer = 0;
    while(i<n){
        answer += v[i+1] - v[i];
        i=i+2; 
    }
    return answer;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;cin>>x;
        v.push_back(x);
    }
    cout<<solution(v);
    return 0;
}
