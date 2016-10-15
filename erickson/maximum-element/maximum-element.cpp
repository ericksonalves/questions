#include <iostream>
#include <stack>

int main(void)
{
    unsigned int N;
    std::cin >> N;
    std::stack<unsigned int> stack;
    std::stack<unsigned int> max_stack;
    max_stack.push(0);
    for (auto i = 0; i != N; ++i) {
        unsigned int type;
        std::cin >> type;
        if (type == 1) {
            unsigned int x;
            std::cin >> x;
            stack.push(x);
            if (x >= max_stack.top())
                max_stack.push(x);
        } else if (type == 2) {
            if (stack.top() == max_stack.top())
                max_stack.pop();
            stack.pop();
        } else {
            std::cout << max_stack.top() << std::endl;
        }
    }
    return 0;
}
