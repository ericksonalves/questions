Node* Insert(Node* head, int data)
{
    Node* node = new Node;
    node->data = data;
    node->next = nullptr;
    Node* previous = nullptr;
    Node* current = head;
    while (current != nullptr) {
        previous = current;
        current = current->next;
    }
    if (previous == nullptr)
        head = node;
    else
        previous->next = node;
    return head;
}
