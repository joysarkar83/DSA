#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class LRUCache {
    unordered_map<int, int> newMap;
    vector<int> lastAdded;
    int capacity;
    int size;

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        size = 0;
    }
    
    int get(int key) {
        if(newMap.count(key)){
            
            return newMap[key];
        }
        return -1;
    }
    
    void put(int key, int value) {
        bool erased = false;      
        if(size >= capacity){
            newMap.erase(lastAdded.back());
            if(!lastAdded.empty()) lastAdded.pop_back();
            erased = true;
            size--;
        }
        if(newMap.count(key) == 0){
            size++;
            if(!erased){
                lastAdded.emplace_back(key);
            }
        }
        newMap[key] = value;
    }
};

int main(){
    LRUCache* data = new LRUCache(2);
    data->put(1,0);
    data->put(2,2);
    cout<<data->get(4);
    cout<<data->get(2);

    return 0;
}