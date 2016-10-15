#include <stack>

void ReversePrint(Node *head)
{
    std::stack<int> stack;
    while (head != nullptr) {
        stack.push(head->data);
        head = head->next;
    }
    while (stack.size() != 0) {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
}
