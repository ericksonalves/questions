#include <iostream>
#include <vector>

int main()
{
    unsigned int T;
    std::cin >> T;
    for (auto t = 0; t != T; ++t) {
        unsigned int N, K;
        std::cin >> N >> K;
        std::vector<int> a(N);
        unsigned int arrived_on_time = 0;
        for (auto i = 0; i != N; ++i) {
            std::cin >> a[i];
            if (a[i] <= 0)
                arrived_on_time++;
        }
        std::cout << (arrived_on_time >= K ? "NO" : "YES") << std::endl;
    }
    return 0;
}
