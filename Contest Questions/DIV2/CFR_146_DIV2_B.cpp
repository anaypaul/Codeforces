#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> div(a*b*c+1, 0);
    //find the no of divisors for all numbers from 1 to a*b*c

    //this segment set divisor of 1 as 1 and all others as 2 ie the number is divisble by 1 and itself.
    for(int i = 1;i<div.size();i++){
        if(i==1){
            div[i] = 1;
        }else{
            div[i] = 2;
        }
    }

    //this segment counts the other factors in the vector.
    for(int i = 2; i*i < (a*b*c + 1); i++){
        for(int j = i; i*j < (a*b*c + 1); j++){
            if(i!=j){
                div[i*j] += 2;
            }else{
                div[i*j] += 1;
            }
        }
    }
    int ans = 0;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=b;j++){
            for(int k = 1;k<=c;k++){
                ans = ans + div[i*j*k];
                if(ans > 1073741824){
                    ans = ans%1073741824;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
