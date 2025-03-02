#include <algorithm>
#include <vector>
using namespace std;

/* 1431. Kids With the Greatest Number of Candies
 *
 * There are n kids with candies. You are given an integer array candies, where
 * each candies[i] represents the number of candies the ith kid has, and an
 * integer extraCandies, denoting the number of extra candies that you have.
 *
 * Return a boolean array result of length n, where result[i] is true if, after
 * giving the ith kid all the extraCandies, they will have the greatest number
 * of candies among all the kids, or false otherwise.
 *
 * Note that multiple kids can have the greatest number of candies.
 * */

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
  auto maxIt = max_element(candies.begin(), candies.end());
  int maxValue = *maxIt;
  vector<bool> result(candies.size());
  for (int i = 0; i < candies.size(); i++) {
    if (candies[i] + extraCandies < maxValue) {
      result[i] = false;
    } else {
      result[i] = true;
    }
  }
  return result;
}
