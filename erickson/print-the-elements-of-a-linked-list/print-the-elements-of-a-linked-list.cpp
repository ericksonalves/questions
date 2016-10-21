void Print(Node* head)
{
    while (head != nullptr) {
        std::cout << head->data << std::endl;
        head = head->next;
    }
}
