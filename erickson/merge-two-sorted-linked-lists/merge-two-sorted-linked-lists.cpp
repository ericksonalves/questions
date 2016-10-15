Node* MergeLists(Node *headA, Node* headB)
{
    Node* merged_list = nullptr;
    Node* current_merged_list_node = nullptr;
    while (headA != nullptr || headB != nullptr) {
        Node* node_to_merge;
        bool head_a_not_null = headA != nullptr;
        bool head_b_not_null = headB != nullptr;
        bool move_a = false, move_b = false;
        if (head_a_not_null && head_b_not_null) {
            if (headA->data < headB->data) {
                node_to_merge = headA;
                move_a = true;
            } else {
                node_to_merge = headB;
                move_b = true;
            }
        } else if (head_a_not_null) {
            node_to_merge = headA;
            move_a = true;
        } else {
            node_to_merge = headB;
            move_b = true;
        }
        if (merged_list == nullptr) {
            merged_list = node_to_merge;
            current_merged_list_node = merged_list;
        } else {
            current_merged_list_node->next = node_to_merge;
            current_merged_list_node = current_merged_list_node->next;
        }
        if (move_a)
            headA = headA->next;
        if (move_b)
            headB = headB->next;
    }
    return merged_list;
}
