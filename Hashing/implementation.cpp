// implementing unordered_map using linear chaining

#include<iostream>
#include<cstring>
using namespace std;

class mapList {
private:
    int data;
    mapList* next;
public:
    
};

class HashMap {
private:
    int size = 1e5;
    pair<int, mapList*> *table;
public:
    HashMap(int size);
    bool isEmpty() const;
    int getKey(int num);
    void insert(int key, int value);
    void remove(int key);
    int search(int key);
    void printHashMap();
};

HashMap::HashMap(int size) {
    size = size;
    table = new pair<int, mapList*>[size];
    for(int i=0; i<size; ++i) {
        table[i].second = nullptr;
    }
}

bool HashMap::isEmpty() const {
    for(int i=0; i<size; ++i) {
        if(table[i].second != nullptr) {
            return false;
        }
    }
    return true;
}

int getKey(int num) {

}