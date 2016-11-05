#include <iostream>
#include <stack>
#include <string>

int main(void)
{
    std::string text(""), W;
    std::stack<std::string> cache;
    unsigned int Q, op, k;
    std::cin >> Q;
    for (unsigned int q = 0; q != Q; ++q) {
        std::cin >> op;
        if (op == 1) {
            std::cin >> W;
            cache.push(text);
            text += W;
        } else if (op == 2) {
            std::cin >> k;
            cache.push(text);
            text = text.substr(0, text.size() - k);
        } else if (op == 3) {
            std::cin >> k;
            std::cout << text[k - 1] << std::endl;
        } else {
            text = cache.top();
            cache.pop();
        }
    }
    return 0;
}
