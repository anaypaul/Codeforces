#include<vector>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int a = 1; a<=n; a++){
        for(int b = a; b<=n;b++){
            int c = sqrt(a*a +b*b);
            int x = a*a +b*b;
            if(c<=n && c>=b && c*c == x){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}