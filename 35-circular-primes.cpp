#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<set>
#include<map>
using namespace std;
void sieve(vector<bool>&dp){
    dp[0]=false;
    dp[1]=false;
    for(int i=2;i<=1000000/i;i++){
        if(dp[i]){
            for(int j=i*i;j<=1000000;j+=i){
                dp[j]=false;
            }
        }
    }
}
int main() {
    int cppp=0;
vector<bool>dp(1000002,true);
sieve(dp);
set<int>st;
for(int i=2;i<1000000;i++){
    if(dp[i] && st.find(i)==st.end()){
        int temp=i;
        int n=0;
        while(temp){
            temp/=10;
            n++;
        }
        n--;
        int mul=pow(10,n);
        int cprime=1;
        int newt=i;
        while(dp[newt]){
            int rem=newt%10;
            int div=newt/10;
            newt=(mul*rem)+div;
          
            if(newt==i){
                cppp++;
                st.insert(i);
                break;
            }
            cprime++;
            
        }
    }
}
  cout<<st.size();
}
