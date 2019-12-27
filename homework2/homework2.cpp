class List{
    
    public:
        void addAt(int pos, int elt);
        void delAll(int x);
    private:

    struct Node{
        int data;
        Node *next;
        Node(int elt = 0,Node *p = NULL):data(elt),next(p){}
    };

    Node *head;
    Node *walk(Node *curr, int k);
    void delNode(Node *p);
};

List::Node *List::walk(List::Node *curr, int k){
    // walks curr forward k steps
    if (k<=0 || curr == NULL)
    return curr;
    else return walk(curr->next, k-1);
}