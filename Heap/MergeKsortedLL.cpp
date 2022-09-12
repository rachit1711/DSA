class compare{
    public:
    bool operator()(ListNode* a,ListNode* b)
    {
        return a->val>b->val;
    }
};
class Solution{
    public:
    ListNode* mergeKLists(vector<ListNode*> &lists)
    {
        int K = lists.size();
        priority_queue<ListNode*,vector<ListNode*>,compare> minHeap;
        if(K==0)
        {
            return NULL;
        }
        //step 1 = push the heads of k ll's in the minheap 
        for(int i=0;i<K;i++)
        {
            if(lists[i]!=NULL)
            {
                minHeap.push(lists[i]);
            }
        }
        ListNode* head=NULL;
        ListNode* tail=NULL;
        while(minHeap.size()>0)
        {
            ListNode* top=minHeap.top();
            minHeap.pop();
            if(top->next!=NULL)
            {
                minHeap.push(top->next);
            }
            if(head==NULL)
            {
                head=top;
                tail=top;
            }
            else{
                tail->next=top;
                tail=top;
            }
        }
        return head;
    }
};