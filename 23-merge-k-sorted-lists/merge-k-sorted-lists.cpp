/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if ( lists.empty()) return nullptr;;
        priority_queue<int,vector<int>, greater<int>> pq;

        for(int i=0 ; i < lists.size() ;i++)
        {
            ListNode* ptr = lists[i];
            while( ptr)
            {
                pq.push(ptr->val);
                ptr = ptr->next;
            }
        }

        ListNode* head = new ListNode(-1);
        ListNode* headPtr = head;
        while ( !pq.empty())
        {
            ListNode* newNode = new ListNode(pq.top());
            pq.pop();

            headPtr->next = newNode;
            headPtr = newNode;
        }

        return head->next;
        
    }
};