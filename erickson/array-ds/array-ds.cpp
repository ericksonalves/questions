#include <iostream>
#include <vector>

int main()
{
    size_t N;
    std::cin >> N;
    std::vector<unsigned int> A(N);
    for (auto i = 0; i != N; ++i)
        std::cin >> A[i];
    for (auto it = A.crbegin(); it != A.crend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    return 0;
}
