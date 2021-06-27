using namespace std;

#include <iostream>
#include <vector>

class Staircase {

public:
  int CountWays(int n) {
    vector<int> dp(n + 1, 0);
    return CountWaysRecursive(dp, n);
  }

  int CountWaysRecursive(vector<int> &dp, int n) {
    if (n == 0) {
      return 1; 
    }

    if (n == 1) {
      return 1; 
    }

    if (n == 2) {
      return 2; 
    }

    if (dp[n] == 0) {
      int take1Step = CountWaysRecursive(dp, n - 1);
      int take2Step = CountWaysRecursive(dp, n - 2);
      int take3Step = CountWaysRecursive(dp, n - 3);
      dp[n] = take1Step + take2Step + take3Step;
    }

    return dp[n];
  }
};

int main(int argc, char *argv[]) {
  Staircase *sc = new Staircase();
  cout << sc->CountWays(3) << endl;
  cout << sc->CountWays(4) << endl;
  cout << sc->CountWays(5) << endl;

  delete sc;
}