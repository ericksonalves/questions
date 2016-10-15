#include <iostream>
#include <vector>

int main(void)
{
    unsigned int N, Q, last_answer = 0;
    std::cin >> N >> Q;
    std::vector<std::vector<unsigned int>> sequences_list(N);
    for (auto i = 0; i != Q; ++i) {
        unsigned int op, x, y;
        std::cin >> op >> x >> y;
        if (op == 1) {
            sequences_list[(x ^ last_answer) % N].push_back(y);
        } else {
            auto sequence = sequences_list[(x ^ last_answer) % N];
            last_answer = sequence[y % sequence.size()];
            std::cout << last_answer << std::endl;
        }
    }
    return 0;
}
