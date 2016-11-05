#include <algorithm>
#include <vector>

std::vector<node*> find(node* root, int v)
{
    std::vector<node*> path;
    while (root != nullptr && root->data != v) {
        path.push_back(root);
        if (v < root->data)
            root = root->left;
        else
            root = root->right;
    }
    path.push_back(root);
    return path;
}

node* lca(node* root, int v1, int v2)
{
    auto path_v1 = find(root, v1);
    auto path_v2 = find(root, v2);
    auto size = std::min(path_v1.size(), path_v2.size());
    auto i = 0;
    for (i = 0; i != size && path_v1[i] == path_v2[i]; ++i);
    return path_v1[i - 1];
}
