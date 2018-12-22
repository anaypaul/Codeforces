#include<iostream>
using namespace std;
string solution(int n, int k){
    string st = "";
    int j = int(n/k);
    while(j--){
        for(int i=0; i<k;i++){
            char x = 'a' + i;
            st += x;
        }
    }
    for(int i = 0; i<n%k; i++){
        char x = 'a' + i;
        st += x;
    }
    return st;
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<solution(n, k)<<endl;
    }
    return 0;
}
