#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max = -1;
    int current_passengers = 0;
    for(int i =0;i<n;i++){
        int _enter, _exit;
        cin>>_exit>>_enter;
        if(i==0){
            current_passengers = _enter;
            if(max < current_passengers){
                max = current_passengers;
            }
        }else{
            current_passengers = current_passengers - _exit + _enter;
            if( max < current_passengers){
                max = current_passengers;
            }
        }
    }
    cout<<max<<endl;
}