class Node {
public :
    int val;
    int key;
    Node* next;
    Node(int _key, int _val) {
        val = _val;
        key = _key;
        next = nullptr;
    }
};

class MyHashMap {
public:
    Node *head = nullptr;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        Node *curr = head;
        while(curr) {
            if(curr -> key == key) {
                curr -> val = value;
                return;
            }
            curr = curr -> next;
        }
        

        if(!head) {
            head = new Node(key, value);
        }else {
            Node *node = new Node(key, value);
            node -> next = head;
            head = node;
        }
    }
    
    int get(int key) {
        Node *curr = head;
        while(curr) {
            if(curr -> key == key) {
                return curr -> val;
            }
            curr = curr -> next;
        }
        return -1;
    }
    
    void remove(int key) {
        Node *curr = head, *prev = nullptr;
        while(curr) {
            if(curr -> key == key) break;
            prev = curr;
            curr = curr -> next;
        }
        if(!curr) return;

        if(!prev) head = head -> next;
        else {
            prev -> next = curr -> next;
        }
    }
};