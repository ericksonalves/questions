Node* Delete(Node* head, int position)
{
    if (head != nullptr) {
        if (position != 0) {
            Node* previous = nullptr;
            Node* current = head;
            while (current != nullptr && position-- > 0) {
                previous = current;
                current = current->next;
            }
            previous->next = current->next;
            delete current;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    return head;
}
