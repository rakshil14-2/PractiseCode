class Node{
    public:
    Node* next=NULL;
    Node* prev=NULL;
    string Url;
    Node(string &url){
        this->Url=url;
    }
};

class BrowserHistory {
public:
    Node* curr = NULL;
    BrowserHistory(string homepage) {
        curr = new Node(homepage);
    }
    
    void visit(string url) {
        Node* node= new Node(url);
        curr->next=node;
        node->prev=curr;
        curr=curr->next;
    }
    
    string back(int steps) {
         while(curr->prev and steps){
            steps--;
            curr=curr->prev;
        }
        return curr->Url;
    }
    
    string forward(int steps) {
         while(curr->next and steps){
            steps--;
            curr=curr->next;
        }
        return curr->Url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */