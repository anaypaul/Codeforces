#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int change25 = 0;
    int change50 = 0;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(x == 25){
            change25++;
        }else if(x==50){
            change25--;
            change50++;
        }else if(x==100){
            if(change50>0){
                change50--;
                change25--;
            }
            else{
                change25 = change25 -3;
            }
        }
        if(change25<0 || change50<0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}