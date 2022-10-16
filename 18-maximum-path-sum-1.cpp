// By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom.


#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<long long>> arr(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            long long p;
            cin>>p;
            arr[i].push_back(p);
        }
    }
    vector<vector<long long>> dp(n);
    dp[0].push_back(arr[0][0]);
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (j == 0)
            {
                dp[i].push_back(arr[i][j] + dp[i - 1][0]);
            }
            else if (j == i)
            {
                dp[i].push_back(arr[i][j] + dp[i - 1].back());
            }
            else
            {
                int temp = max(dp[i - 1][j - 1], dp[i - 1][j]);
                dp[i].push_back(temp + arr[i][j]);
            }
        }
    }
    long long ans = *max_element(dp[n - 1].begin(), dp[n - 1].end());
    cout << ans << endl;
    return 0;
}
