#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1548;

/* Example 1:
Input: 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
*/
tuple<int, int>
testFixture1()
{
  return make_tuple(2, 2);
}

/* Example 2:
Input: 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step.
*/
tuple<int, int>
testFixture2()
{
  return make_tuple(3, 3);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - exepct to see " << get<1>(f) << endl;
  Solution sol;
  cout << sol.climbStairs(get<0>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - exepct to see " << get<1>(f) << endl;
  Solution sol;
  cout << sol.climbStairs(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();

  return 0;
}