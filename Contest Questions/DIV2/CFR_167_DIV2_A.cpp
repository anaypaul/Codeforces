#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int sum = 0;
    for(int i = 0;i < n;i++){
        int x;
        cin>>x;
        sum += x;
    }
    int answer = 0;
    for(int j = 1;j<=5;j++){
        if((sum+j)%(n+1) != 1){
            answer++;
        }
    }
    cout<<answer<<endl;
    return 0;
}