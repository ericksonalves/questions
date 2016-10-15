#include <stack>

Node* Reverse(Node *head)
{
    std::stack<Node*> stack;
    while (head != nullptr) {
        stack.push(head);
        head = head->next;
    }
    Node* reversed_head = nullptr;
    if (stack.size() > 0) {
        reversed_head = stack.top();
        Node* previous = reversed_head;
        stack.pop();
        while (stack.size() > 0) {
            previous->next = stack.top();
            stack.pop();
            previous = previous->next;
        }
        previous->next = nullptr;
    }
    return reversed_head;
}
