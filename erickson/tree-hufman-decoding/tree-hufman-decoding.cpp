void decode_huff(node* root, string s)
{
    node* current_node = root;
    size_t current_index = 0;
    string decoded = "";
    while (current_index < s.size()) {
        if (s[current_index] == '0')
            current_node = current_node->left;
        else
            current_node = current_node->right;
        if (current_node->left == nullptr && current_node->right == nullptr) {
            decoded += current_node->data;
            current_node = root;
        }
        ++current_index;
    }
    cout << decoded << endl;
}
