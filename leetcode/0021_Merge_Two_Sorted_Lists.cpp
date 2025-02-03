/* 21. Merge two sorted lists
 *
 * You are given the heads of two sorted linked lists list1 and list2.
 *
 * Merge the two lists into one sorted list. The list should be made by splicing
 * together the nodes of the first two lists.
 *
 * Return the head of the merged linked list.
 * */

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
  ListNode dummy(0);
  ListNode *tail = &dummy;

  while (list1 && list2) {
    if (list1->val <= list2->val) {
      tail->next = list1;
      list1 = list1->next;
    } else {
      tail->next = list2;
      list2 = list2->next;
    }
    tail = tail->next;
  }

  if (list1) {
    tail->next = list1;
  } else {
    tail->next = list2;
  }

  return dummy.next;
}
