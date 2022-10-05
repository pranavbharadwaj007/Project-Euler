
#include <iostream>
using namespace std;
#define ll long long
const int M = 1e7 + 7;
int main() {
    int t;
    cin >> t;
    int res=0;
    for(int i=1;i<t;i++){
        if(i%3==0 || i%5==0){
            res+=i;
        }
    }
    cout<<res;
    return 0;
}
