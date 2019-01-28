#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int evens = 0;
    int odds = 0;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
            evens++;
        }else{
            odds++;
        }
    }
    if(odds%2==0 && evens!= 0){
        cout<<evens<<endl;
    }else if(odds%2==1){
        cout<<odds<<endl;
    }else if(odds%2==0 && evens==0){
        cout<<"0"<<endl;
    }
    return 0;
}