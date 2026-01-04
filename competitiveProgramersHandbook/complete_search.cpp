#include <vector>
using namespace std;

/* Complete search is a general method that can be used to solve almost any
 * algorithm problem. The idea is to generate all possible solutions to the
 * problem using brute force, and then select the best solution or count the
 * number of solutions, depending on the problem. Complete search is a good
 * technique if there is enough time to go through all the solutions, because
 * the search is usually easy to implement and it always gives the correct
 * answer. If complete search is too slow, other techniques, such as greedy
 * algorithms or dynamic programming, may be needed.
 * */

/* Generating subsets
 *
 * We first consider the problem of generating all subsets of a set of n
 * elements. For example, the subsets of {0,1,2} are , {0}, {1}, {2}, {0,1},
 * {0,2}, {1,2} and {0,1,2}. There are two common methods to generate subsets:
 * we can either perform a recursive search or exploit the bit representation of
 * integers.
 * */

vector<int> subset;
int n = subset.size();

void search(int k) {
  if (k == n) {
    // process subset
  } else {
    search(k + 1);
    subset.push_back(k);
    search(k + 1);
    subset.pop_back();
  }
}

/* Generating permutations
 *
 * Next we consider the problem of generating all permutations of a set of n
 * elements. For example, the permutations of {0,1,2} are (0,1,2), (0,2,1),
 * (1,0,2), (1,2,0), (2,0,1) and (2,1,0). Again, there are two approaches: we
 * can either use recursion or go through the permutations iteratively.
 * */

vector<int> permutation;
vector<int> chosen;

void searchPermutation1() {
  if (permutation.size() == n) {
    // process permutation
  } else {
    for (int i = 0; i < n; i++) {
      if (chosen[i])
        continue;
      chosen[i] = true;
      permutation.push_back(i);
      searchPermutation1();
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}

void searchPermutation2() {
  for (int i = 0; i < n; i++) {
    permutation.push_back(i);
  }
  do {
    // process permutation
  } while (next_permutation(permutation.begin(), permutation.end()));
}
