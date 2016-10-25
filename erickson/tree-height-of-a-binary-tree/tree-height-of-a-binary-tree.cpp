int max(const int& a, const int& b)
{
    return a > b ? a : b;
}

int height(Node* root)
{
    if (root != nullptr) {
        int left_height = root->left != nullptr ? 1 + height(root->left) : 0;
        int right_height = root->right != nullptr ? 1 + height(root->right) : 0;
        return max(left_height, right_height);
    }
    return 0;
}
