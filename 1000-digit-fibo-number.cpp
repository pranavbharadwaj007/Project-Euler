#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<fstream>
using namespace std;

int main() {
    vector<int>dp(1000,0);
    vector<int>a(1000,0);
    vector<int>b(1000,0);
    int carry=0;
    int cnt=2;// a,b already 1
    a[0]=1;
    b[0]=1;
    while(1){
        for(int i=0;i<1000;i++){
            int tem=a[i]+b[i]+carry;
            dp[i]=tem%10;
            carry=tem/10;
        }
        a=b;
        b=dp;
        cnt++;
        if(dp[999]!=0)break;
    }
    cout<<cnt<<endl;
return 0;
}
