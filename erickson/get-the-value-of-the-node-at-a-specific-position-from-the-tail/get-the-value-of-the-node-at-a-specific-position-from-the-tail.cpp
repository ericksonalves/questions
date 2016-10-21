#include <stack>

int GetNode(Node* head, int positionFromTail)
{
    std::stack<int> stack;
    while (head != nullptr) {
        stack.push(head->data);
        head = head->next;
    }
    while (positionFromTail != 0) {
        stack.pop();
        --positionFromTail;
    }
    return stack.top();
}
