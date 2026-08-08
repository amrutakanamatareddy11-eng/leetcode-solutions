class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int size = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        // Delete head
        if (size == n) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        temp = head;

        // Move to node before the one to delete
        for (int i = 1; i < size - n; i++) {
            temp = temp->next;
        }

        ListNode* del = temp->next;
        temp->next = del->next;
        delete del;

        return head;
    }
};