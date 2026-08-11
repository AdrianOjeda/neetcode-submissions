
class Node {
public:
    int key;
    int val;
    Node* prev;
    Node* next;

    Node(int k, int v): key(k), val(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {

private:
    int cap;
    unordered_map<int, Node*> lookup;
    Node* left;
    Node* right;

    void remove(Node* node) {
        Node* prev = node->prev;
        Node* next = node->next;
        prev->next = next;
        next->prev = prev;
    }

    void insert(Node* node) {
        Node* prev = right->prev;
        prev->next = node;
        node->prev = prev;
        node->next = right;
        right->prev = node;
    }

public:
    LRUCache(int capacity) {
        cap = capacity;
        lookup.clear();
        left = new Node(0, 0);
        right = new Node(0, 0);
        left->next = right;
        right->prev = left;
    }
    
    int get(int key) {
        if (lookup.find(key) != lookup.end()) {
            Node* node = lookup[key];
            remove(node);
            insert(node);
            return node->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (lookup.find(key) != lookup.end()) {
            remove(lookup[key]);
            delete lookup[key];
        }

        Node* newNode = new Node(key, value);
        lookup[key] = newNode;
        insert(newNode);

        if (lookup.size() > cap) {
            Node* lru = left->next;
            remove(lru);
            lookup.erase(lru->key);
            delete lru;
        }
    }

    
};

