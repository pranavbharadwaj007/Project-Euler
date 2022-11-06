#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<fstream>
#include<map>
using namespace std;
int isf(int n){
    int sumi=0;
    while(n){
        int rem=n%10;
        sumi+=(pow(rem,5));
        n/=10;
    }
    return sumi;
}
int main() {

vector<int>coin={1,2,5,10,20,50,100,200};
int tar=200;
vector<int>curr(tar+1,0),prev(tar+1,0);
for(int i=0;i<=tar;i++){
    prev[i]=((i%coin[0])==0);
}
for(int ind=1;ind<8;ind++){
    for(int t=0;t<=tar;t++){
        int ntak=prev[t];
        int tak=0;
        if(coin[ind]<=t){
            tak+=curr[t-coin[ind]];
        }
        curr[t]=tak+ntak;
    }
    prev=curr;
}
cout<<prev[tar];
return 0;
}

