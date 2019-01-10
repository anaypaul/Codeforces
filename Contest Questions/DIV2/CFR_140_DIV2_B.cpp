#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int pos[100001];
    for(long long int i = 1; i<n+1;i++){
        long long int x;
        cin>>x;
        pos[x] = i;
    }
    long long int m;
    cin>>m;
    long long int vasya = 0;
    long long int petya = 0;
    while(m--){
        long long int val;
        cin>>val;
        vasya += pos[val];
        petya += n-pos[val] + 1;
    }
    cout<<vasya<<" "<<petya<<endl;
    return 0;
}