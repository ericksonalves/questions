#include <vector>
#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    for (int tc = 0; tc != t; ++tc) {
        cin >> n;
        vector<int> arr(n);
        int k, sum = 0;
        for (k = 0; k != n; ++k) {
            cin >> arr[k];
            sum += arr[k];
        }
        int sl = 0;
        bool okay = false;
        for (k = 0; k != n; ++k) {
            okay = okay || sl == (sum - sl - arr[k]);
            sl += arr[k];
        }
        cout << (okay ? "YES" : "NO") << endl;
    }
    return 0;
}
