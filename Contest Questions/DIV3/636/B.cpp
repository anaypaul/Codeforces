#include<iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        if(n == 2){
            cout<<"NO"<<endl;
            continue;
        }
        int t = n/2;
        int evenSum = t * (t + 1);
        int oddSum = t * t;
        int diff = evenSum - oddSum;
        if(diff %2 == 0){
            cout<<"YES"<<endl;
            int num = 2;
            for(int i = 0; i<t; i++){
                cout<<num<<" ";
                num += 2;
            }
            num = 1;
            for(int i = 0; i<t-1; i++){
                cout<<num<<" ";
                num += 2;
            }
            num += diff;
            cout<<num<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
}