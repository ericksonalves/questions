#include <iostream>
#include <vector>

int main() {
    unsigned int q, front = 0;
    std::cin >> q;
    std::vector<unsigned int> queue;
    for (unsigned int i = 0; i != q; ++i) {
        unsigned int op;
        unsigned int x;
        std::cin >> op;
        if (op == 1) {
            std::cin >> x;
            queue.push_back(x);
        } else if (op == 2) {
            front++;
        } else {
            std::cout << queue[front] << std::endl;
        }
    }
    return 0;
}
