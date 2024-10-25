#include <iostream>
using namespace std;
#define Hd main(void)
int countConsecutiveSums(long long n) {
    long long count = 0;
    for (long long length = 1; length * (length + 1) < 2 * n; length++) {
        float a = (1.0 * n - (length * (length + 1)) / 2) / (length + 1);
        if (a - int(a) == 0.0) {
            count++;
        }
    }
    return count;
}
Hd {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long caseNum, num;
        cin >> caseNum >> num;
        cout << caseNum << " " << countConsecutiveSums(num) << endl;
    }
}