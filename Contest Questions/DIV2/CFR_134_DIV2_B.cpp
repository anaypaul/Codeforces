#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n,planes;
    cin>>n>>planes;
    vector<int> seats;
    int sum = 0;
    for(int i = 0;i<planes;i++){
        int x;
        cin>>x;
        seats.push_back(x);
        sum += x;
    }
    if(n>=sum){
        int ans = 0;
        for(int i = 0;i<planes;i++){
            ans += seats[i]*(seats[i]+1)/2;
        }
        cout<<ans<<" "<<ans<<endl;
    }else{
        vector<int> seats_max(seats);
        if(n<sum && planes == 1){
            int ansx = seats[0]*(seats[0]+1)/2;
            int k = (seats[0]-n)*(seats[0]-n+1)/2;
            cout<<ansx-k<<" "<<ansx-k<<endl;
        }else{
            //max
            int max_ = 0;
            for( int i = 0;i<n;i++){
                int max_index = -1;
                for(int j = 0;j<planes;j++){
                    if(seats_max[j] && (max_index < 0 || seats_max[j] > seats_max[max_index] ) ){
                        max_index = j;
                    }
                }
                if( max_index < 0){
                    continue;
                }
                max_ += seats_max[max_index];
                --seats_max[max_index];
            }
            cout<<max_<<" ";


            //min
            int min_=0;
            for(int i = 0;i<n;i++){
                int min_index = -1;
                for(int j = 0;j<planes;j++){
                    if(seats[j] && (min_index <0 || seats[j] < seats[min_index])){
                        min_index = j;
                    }
                }
                if(min_index < 0){
                    continue;
                }
                min_ += seats[min_index];
                --seats[min_index];
            }
            cout<<min_<<endl;
        }
    }

    return 0;
}