#include <iostream>
#include <vector>

int main()
{
    size_t N;
    unsigned int d;
    std::cin >> N >> d;
    std::vector<unsigned int> A(N);
    for (auto i = 0; i != N; ++i)
        std::cin >> A[i];
    while (d-- > 0) {
        unsigned int head = A[0];
        A.erase(A.begin());
        A.push_back(head);
    }
    for (auto i = 0; i != N; ++i)
        std::cout << A[i] << " ";
    return 0;
}
