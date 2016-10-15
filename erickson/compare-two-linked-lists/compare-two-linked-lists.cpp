int CompareLists(Node* headA, Node* headB)
{
    while (headA != nullptr && headB != nullptr) {
        if (headA->data != headB->data)
            return 0;
        headA = headA->next;
        headB = headB->next;
    }
    return headA == nullptr && headB == nullptr;
}
