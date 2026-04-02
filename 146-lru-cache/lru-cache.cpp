class Node
{
public:
    int key,value;
    Node* prev;
    Node* next;

    Node(int k,int v)
    {
        key = k;
        value = v;
        next = prev = nullptr;
    }
};

class LRUCache {
private:
    unordered_map<int,Node*> lc;
    Node* head;
    Node* tail;
    int sizeCap;

    void remove(Node* node)
    {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;


    }

    void addFirst(Node* node)
    {
        node->next = head->next;
        node->prev = head;

        head->next = node;
        node->next->prev = node;
    }

public:
    LRUCache(int capacity) 
    {
        sizeCap = capacity;
        head = new Node(-1,-1);
        tail = new Node(-1,-1);
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) 
    {
        if ( lc.find(key) != lc.end() )
        {
            Node* node = lc[key];
            remove(node);
            addFirst(node);
            return node->value;
        }
        return -1;
        
    }
    
    void put(int key, int value) 
    {
        if ( lc.find(key) != lc.end())
        {
            Node* node = lc[key];
            node->value = value;

            remove(node);
            addFirst(node);
        }
        else
        {
            if ( lc.size() == sizeCap)
            {
                Node* lru = tail->prev;
                remove(lru);
                lc.erase(lru->key);
                delete lru;

                Node* newNode = new Node(key,value);
                addFirst(newNode);
                lc[key] = newNode;

            }
            else
            {
                Node* newNode = new Node(key,value);
                addFirst(newNode);
                lc[key] = newNode;
            }
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */