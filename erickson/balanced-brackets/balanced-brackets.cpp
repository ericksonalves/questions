#include <iostream>
#include <stack>
#include <string>

int main(void)
{
    unsigned int n;
    std::cin >> n;
    for (auto t = 0; t != n; ++t) {
        std::string input;
        std::cin >> input;
        std::stack<unsigned char> stack;
        auto proceed = true;
        for (auto i = 0; i != input.size() && proceed; ++i) {
            switch (input[i]) {
                case '{':
                case '[':
                case '(':
                    stack.push(input[i]);
                    break;
                case '}':
                    if (stack.size() > 0 && stack.top() == '{')
                        stack.pop();
                    else
                        proceed = false;
                    break;
                case ']':
                    if (stack.size() > 0 && stack.top() == '[')
                        stack.pop();
                    else
                        proceed = false;
                    break;
                case ')':
                    if (stack.size() > 0 && stack.top() == '(')
                        stack.pop();
                    else
                        proceed = false;
                    break;
                default:
                    break;
            }
        }
        std::cout << (stack.size() == 0 && proceed ? "YES" : "NO") << std::endl;
    }
    return 0;
}
