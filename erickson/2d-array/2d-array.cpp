#include <iostream>
#include <vector>

int main()
{
    size_t N = 6;
    std::vector<std::vector<int>> A;
    for (auto i = 0; i != N; ++i) {
        std::vector<int> current_row(N);
        for (auto j = 0; j != N; ++j)
            std::cin >> current_row[j];
        A.push_back(current_row);
    }
    int largest_hourglass_sum = -9 * 7 - 1;
    for (auto i = 0; i != N - 2; ++i) {
        for (auto j = 0; j != N - 2; ++j) {
            int hourglass_sum = A[i][j] + A[i][j + 1] + A[i][j + 2];
            hourglass_sum += A[i + 1][j + 1];
            hourglass_sum += A[i + 2][j] + A[i + 2][j + 1] + A[i + 2][j + 2];
            if (hourglass_sum > largest_hourglass_sum)
                largest_hourglass_sum = hourglass_sum;
        }
    }
    std::cout << largest_hourglass_sum << std::endl;
    return 0;
}
