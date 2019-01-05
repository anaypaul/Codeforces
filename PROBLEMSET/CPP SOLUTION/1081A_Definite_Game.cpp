#include<iostream>
using namespace std;
int solution(int v){
    if(v==2){
        return 2;
    }else{
        return 1;
    }
}
int main(int argc, char const *argv[])
{
    int v;
    cin>>v;
    cout<<solution(v)<<endl;
    return 0;
}
