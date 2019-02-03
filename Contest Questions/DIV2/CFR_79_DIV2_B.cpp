#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int getsum(int s){
    int sum = 0;
    while(s>0){
        sum += s%10;
        s = s/10;
    }
    return sum;
}
int main(){
    string s;
    cin>>s;
    if(s.length()==1){
        cout<<"0"<<endl;
        return 0;
    }
    int sum = 0;
    for(int i = 0;i<s.length();i++){
        sum += (int)(s[i]-'0');
    }
    int ans = 1;
    while(sum/10 > 0){
        sum = getsum(sum);
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}