// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>
using namespace std;
#define ll long long
const int M = 1e7 + 7;
bool find(int p){
for(int i=1;i<=20;i++){
    if((p%i)!=0)return false;
}
return true;
}
int main() {
    int i=1;
    while(true){
        if(find(i))break;
        i++;
    }
    cout<<i<<endl;
    return 0;
}

// The above one is brute-force
// Most optimized approach 
// 1. For natural numbers 2..20 find decomosition into prime powers: 2, 3, 2^2, 5, 2*3, 7, 2^3, 3^2, 2*5, 11, 2^2*3, 13, 2*7, 3*5, 2^4, 17, 2*3^2, 19, 2^2*5
// 2. For every prime power in the list above, collect those with highest exponent: 2^4, 3^2, 5, 7, 11, 13, 17, 19
// 3. Result is the product of the collected prime powers from the previous step: 2^4 * 3^2 * 5 * 7 * 11 * 13 * 17 * 19 = 232792560
// This is the interated lcm (least common multiple) over numbers 2..20. In Mathematica this is simply expressed as
