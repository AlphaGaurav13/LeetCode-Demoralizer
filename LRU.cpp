#include <bits/stdc++.h>
using namespace std;

class LRUCache {
private:
    struct Node {
        int key, value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = next = nullptr;
        }
    };

    int capacity;

    unordered_map<int, Node*> mp;

    Node* head; // dummy head
    Node* tail; // dummy tail

    // add node right after head (most recent)
    void addFront(Node* node) {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    // remove node from DLL
    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    // move node to front
    void moveToFront(Node* node) {
        remove(node);
        addFront(node);
    }

public:
    LRUCache(int cap) {
        capacity = cap;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];

        moveToFront(node);

        return node->value;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            node->value = value;

            moveToFront(node);
            return;
        }

        if (mp.size() == capacity) {
            Node* lru = tail->prev;

            mp.erase(lru->key);
            remove(lru);
            delete lru;
        }

        Node* node = new Node(key, value);

        mp[key] = node;
        addFront(node);
    }
};
