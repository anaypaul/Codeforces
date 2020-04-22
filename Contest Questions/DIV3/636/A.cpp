#include<iostream>
using namespace std;
#define ll long long int
int main(){
    int tc;
    cin>>tc;
    while(tc>0){
        int n;
        cin>>n;
        for(int k = 2; k<30; k++){
            int x = (1<<k) -1;
            if(n % x == 0){
                cout<<n / x<<endl;
                break;
            }
        }
        tc--;

    }
    return 0;
}