#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    unsigned int N, Q;
    std::cin >> N;
    std::vector<std::string> strings(N);
    for (auto i = 0; i != N; ++i)
        std::cin >> strings[i];
    std::cin >> Q;
    for (auto i = 0; i != Q; ++i) {
        std::string query;
        std::cin >> query;
        unsigned int times = 0;
        for (auto j = 0; j != N; ++j) {
            times += strings[j] == query;
        }
        std::cout << times << std::endl;
    }
    return 0;
}
