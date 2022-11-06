
#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>

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

 int res=0;
for(int i=10;i<200000;i++){
    int val=isf(i);
    if(val==i){
        res+=val;
    }
}
cout<<res<<endl;
return 0;
}

