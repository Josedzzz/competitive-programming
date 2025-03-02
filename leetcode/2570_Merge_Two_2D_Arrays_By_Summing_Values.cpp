#include <map>
#include <vector>
using namespace std;

/* 2570. Merge Two 2D Arrays by Summing Values
 *
 * You are given two 2D integer arrays nums1 and nums2.
 * nums1[i] = [idi, vali] indicate that the number with the id idi has a value
 * equal to vali. nums2[i] = [idi, vali] indicate that the number with the id
 * idi has a value equal to vali. Each array contains unique ids and is sorted
 * in ascending order by id.
 *
 * Merge the two arrays into one array that is sorted in ascending order by id,
 * respecting the following conditions:
 *
 * Only ids that appear in at least one of the two arrays should be included in
 * the resulting array. Each id should be included only once and its value
 * should be the sum of the values of this id in the two arrays. If the id does
 * not exist in one of the two arrays, then assume its value in that array to be
 * 0. Return the resulting array. The returned array must be sorted in ascending
 * order by id.
 * */

vector<vector<int>> mergeArrays(vector<vector<int>> &nums1,
                                vector<vector<int>> &nums2) {
  map<int, int> idToValue;
  for (const auto &pair : nums1) {
    int id = pair[0];
    int value = pair[1];
    idToValue[id] += value;
  }
  for (const auto &pair : nums2) {
    int id = pair[0];
    int value = pair[1];
    idToValue[id] += value;
  }
  vector<vector<int>> result;
  for (const auto &[id, value] : idToValue) {
    result.push_back({id, value});
  }
  return result;
}
