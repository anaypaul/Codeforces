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
        if(n<sum && planes == 1){
            int ansx = seats[0]*(seats[0]+1)/2;
            int k = (seats[0]-n)*(seats[0]-n+1)/2;
            cout<<ansx-k<<" "<<ansx-k<<endl;
        }else{
            int min_ = 0;
            int max_ = 0;
            vector<int> seats_min(seats);
            sort(seats_min.begin(),seats_min.end());



            int i = 0;
            int j = 0;
            int done = 0;
            while(i<n){
                while(seats_min[j]>0){
                    min_ += seats_min[j];
                    seats_min[j]--;
                    i++;
                    if(i==n){
                        done = 1;
                        break;
                    }
                }
                if(done == 1){
                    break;
                }else{
                    j++;
                }
            } 
            sort(seats.begin(),seats.end());
            reverse(seats.begin(),seats.end());
            i = 0;
            j = 0;
            done = 0;
            while(i<n){
                while(seats[j]>=seats[j+1]){
                    max_ += seats[j];
                    seats[j]--;
                    i++;
                    if(i==n){
                        done = 1;
                        break;
                    }
                }
                
                if(done==1){
                    break;
                }else{
                    j = (j +1)%seats.size();
                }
            }
            cout<<max_<<" "<<min_<<endl;
        }
    }

    return 0;
}