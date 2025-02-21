/* 70. Climbing Stairs
 *
 * You are climbing a staircase. It takes n steps to reach the top.
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can
 * you climb to the top?
 * */

int climbStairs(int n) {
  if (n == 1)
    return 1;
  int prev1 = 1;
  int prev2 = 1;
  for (int i = 2; i <= n; i++) {
    int current = prev1 + prev2;
    prev2 = prev1;
    prev1 = current;
  }
  return prev1;
}
