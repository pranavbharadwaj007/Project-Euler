#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<string>
#include<map>
using namespace std;

int getdig(int denom){
    int num=1;// initial numrerator
    int cnt=1;
    map<int,int>mp;

    while(1){
        if(mp.find(num)!=mp.end()){
            return cnt-mp[num];
        }
        else{
            mp[num]=cnt;
            num=(num*10)%denom;
        }
        cnt++;
    }
return 0;
}

int main() {
    int maxi;
    cin>>maxi;
    int res=0;
    int denom=0;
    for(int i=2;i<=maxi;i++){
        int tem=getdig(i);
        if(tem>res){
            res=tem;
            denom=i;
        }
    }
    cout<<res<<" "<<denom<<endl;
return 0;
}
