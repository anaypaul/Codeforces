#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
    long long int t;
    long long int start_x,start_y, end_x, end_y;
    cin>>t>>start_x>>start_y>>end_x>>end_y;
    string s;
    cin>>s;
    long long int time_y = 0;
    long long time_x = 0;
    //time for x
    int flag_x = 0;
    int flag_y = 0;
    if(start_x <=end_x){
        cout<<"start <= end for x axis"<<endl;
        int count_east_wind = 0;
        int count_west_wind = 0;
        for(int i = 0;i<s.length();i++){
            if(start_x == end_x){
                flag_x = 1;
                break;
            }
            if(s[i]=='E'){
                start_x += 1;
            }
            time_x++;
        }
        if(start_x == end_x){
                flag_x = 1;
        }
    }else{
        cout<<"start > end for x axis"<<endl;
        int count_east_wind = 0;
        int count_west_wind = 0;
        for(int i = 0;i<s.length();i++){
            if(start_x==end_x){
                flag_x = 1;
                break;
            }
            if(s[i]=='W'){
                start_x -= 1;
            }
            time_x++;
        }
        if(start_x==end_x){
                flag_x = 1;
        }
    }
    if(flag_x==1){
        if(start_y <= end_y){
            cout<<"start <= end for y axis"<<endl;
            long long int count_north_wind = 0;
            long long int count_south_wind = 0;
            for(int i = 0;i<s.length();i++){
                if(start_y==end_y){
                    flag_y = 1;
                    break;
                }
                if(s[i]=='N'){
                    start_y += 1;
                }
                time_y++;
            }
            if(start_y==end_y){
                    flag_y = 1;
            }
        }else{
            cout<<"start > end on y axis"<<endl;
            long long int count_north_wind = 0;
            long long int count_south_wind = 0;
            for(int i = 0;i<s.length()+1;i++){
                if(start_y==end_y){
                    flag_y = 1;
                    break;
                }
                if(s[i]=='S'){
                    start_y -= 1;
                }
                time_y++;
            }
            if(start_y==end_y){
                    flag_y = 1;
            }
        }
    }
    cout<<"time x"<<time_x<<" time y "<<time_y<<"flag_x "<<flag_x<<" flag_y"<<flag_y<<endl;
    int time = time_x> time_y ? time_x : time_y;
    cout<<"final time "<<time<<endl;
    if( time <= t && flag_x==1 && flag_y==1){
        cout<<time<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}