#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <algorithm>
#include <string>
#include <queue>
#include <sstream>
#include <functional>
#include <math.h>

using namespace sol1548;
using namespace std;

/*takeaways
  - DP
  - to arrive at n, you can walk two steps from n-2
    or one step from  n-1
  - time complexity O(n)
*/

int Solution::climbStairs(int n)
{
  if (n <= 2)
    return n;
  /* dp[i-1]: number of ways to arrive at stair i */
  auto dp = vector<int>(n);
  /* base cases */
  dp[0] = 1, dp[1] = 2;
  for (auto i = 2; i < n; i++)
    dp[i] = dp[i - 2] + dp[i - 1];

  return dp[n - 1];
}