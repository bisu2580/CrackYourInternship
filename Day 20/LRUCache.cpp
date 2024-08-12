#include<bits/stdc++.h>
using namespace std;
class LRUCache
{
public:
    class Node
    {
    public:
        int key;
        int val;
        Node *prev;
        Node *next;
        Node(int key, int val)
        {
            this->key = key;
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }
    };
    map<int, Node *> mp;
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);
    int size;

    void deleteNode(Node *node)
    {
        Node *previous = node->prev;
        Node *nxt = node->next;
        previous->next = nxt;
        nxt->prev = previous;
    }
    void insertAtHead(Node *list)
    {
        Node *currAfter = head->next;
        list->next = currAfter;
        list->prev = head;
        head->next = list;
        currAfter->prev = list;
    }
    LRUCache(int capacity)
    {
        size = capacity;
        mp.clear();
        head->next = tail;
        tail->prev = head;
    }
    int get(int key)
    {
        if (!mp.count(key))
            return -1;
        Node *newNode = mp[key];
        deleteNode(newNode);
        insertAtHead(newNode);
        return newNode->val;
    }
    void put(int key, int value)
    {
        if (mp.count(key))
        {
            Node *node = mp[key];
            node->val = value;
            deleteNode(node);
            insertAtHead(node);
        }
        else
        {
            if (mp.size() == size)
            {
                Node *node = tail->prev;
                mp.erase(node->key);
                deleteNode(node);
            }
            Node *node = new Node(key, value);
            mp[key] = node;
            insertAtHead(node);
        }
    }
};
int main(){
}