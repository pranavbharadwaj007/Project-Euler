#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int mod = 1e9 + 7;
int main() {
    int n;
    cin>>n;
    n++;
     vector<vector<long long int>>vec(n,vector<long long int>(n,0));
     
     for(int i=0;i<n;i++){
        vec[i][0]=1;
        vec[0][i]=1;
     }
     for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            vec[i][j]=(vec[i-1][j]+vec[i][j-1]);
        }
     }
     cout<<vec[n-1][n-1]<<endl;

    return 0;
}
