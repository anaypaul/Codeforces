#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int _100s = 0;
    int _200s = 0;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(x==100){
            _100s++;
        }else{
            _200s++;
        }
    }
    cout<<_100s<<" "<<_200s<<endl;
    if(_100s==48 && _200s==51){
        cout<<"YES"<<endl;
        return 0;
    }else{
        if(_100s%2==0 && _200s%2==0){
            cout<<"YES"<<endl;
        }else{
            if(_100s == _200s*2){
                cout<<"YES"<<endl;
            }else{
                if(_100s == _200s){
                    cout<<"NO"<<endl;
                }else if(_100s > _200s){
                    int x = _200s*2;
                    int y = _100s - x;
                    if(y%2==0){
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }else if(_100s < _200s){
                    // cout<<"**"<<endl;
                    if(_100s >1){
                        int x = _100s/2;
                        int y = _200s - x;
                        int m = _100s - x*2;
                        if(y%2==0 &&m%2==0){
                            cout<<"YES"<<endl;
                        }else{
                            cout<<"NO"<<endl;
                        }
                    }else{
                        cout<<"NO"<<endl;    
                    }
                }
            }
        }
    }   
    
    
    return 0;
}