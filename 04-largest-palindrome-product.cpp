#include <iostream>
#include<vector>
using namespace std;
#define ll long long
const int M = 1e7 + 7;

int main() {
    int resp=0;
   for(int i=999;i>99;i--){
    for(int j=999;j>99;j--){
        int resti=i*j;
    int tem=resti;
    int res=0;
    while(tem){
        res*=10;
        res=res+tem%10;
        tem/=10;
    }
    if(res==resti){
       resp=max(resp,res);
    }
    }
   }    
    cout<<resp;
    return 0;
}
