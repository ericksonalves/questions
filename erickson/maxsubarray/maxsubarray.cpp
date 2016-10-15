#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
    unsigned int T, N;
    std::cin >> T;
    for (auto t = 0; t != T; ++t) {
        std::cin >> N;
        std::vector<int> A(N);
        std::vector<int> solution(N + 1);
        solution[0] = -10001;
        int max_continuous = -10001, max_non_continuous = 0;
        int smaller_negative = -10001;
        bool all_negatives = true;
        for (auto i = 0; i != N; ++i) {
            std::cin >> A[i];
            solution[i + 1] = std::max(A[i], solution[i] + A[i]);
            if (solution[i + 1] > max_continuous)
                max_continuous = solution[i + 1];
            if (A[i] > 0) {
                max_non_continuous += A[i];
                all_negatives = false;
            }
            else if (all_negatives && A[i] > smaller_negative) {
                smaller_negative = A[i];
            }
        }
        std::cout << max_continuous << " " << (all_negatives ? smaller_negative : max_non_continuous) << std::endl;
    }
    return 0;
}
