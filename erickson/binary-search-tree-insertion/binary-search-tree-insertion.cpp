node* insert(node* root, int value)
{
    node* previous = nullptr;
    node* current = root;
    while (current != nullptr) {
        previous = current;
        if (value < current->data)
            current = current->left;
        else
            current = current->right;
    }
    current = new node;
    current->data = value;
    current->left = nullptr;
    current->right = nullptr;
    if (previous != nullptr) {
        if (value < previous->data)
            previous->left = current;
        else
            previous->right = current;
    } else {
        root = current;
    }
    return root;
}
