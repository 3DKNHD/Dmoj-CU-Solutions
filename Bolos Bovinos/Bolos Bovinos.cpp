#include <iostream>
#include <vector>
#define Hd main(void)


Hd{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n;
    std::cin >> n;

    std::vector<std::vector<long long>> mat(n, std::vector<long long>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cin >> mat[i][j];
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            mat[i][j] += std::max(mat[i + 1][j], mat[i + 1][j + 1]);
        }
    }

    std::cout << mat[0][0];
}