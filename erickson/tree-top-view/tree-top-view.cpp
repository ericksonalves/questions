#include <deque>

void go_left(node* root, std::deque<int>& deque)
{
    if (root != nullptr) {
        deque.push_front(root->data);
        go_left(root->left, deque);
    }
}

void go_right(node* root, std::deque<int>& deque)
{
    if (root != nullptr) {
        deque.push_back(root->data);
        go_right(root->right, deque);
    }
}

void top_view(node* root)
{
    std::deque<int> deque;
    if (root != nullptr) {
        go_left(root->left, deque);
        deque.push_back(root->data);
        go_right(root->right, deque);
    }
    for (const auto& data : deque)
        std::cout << data << " ";
}
