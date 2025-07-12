#include <iostream>
#include <list>
#include <unordered_map>
#include <utility>
using namespace std;

class LRUCache {
    public:
    int capacity;
    unordered_map<int, pair<int, list<int>::iterator>> data;
    list<int> cache;

    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        if(data.find(key) == data.end()){
            return -1;
        }

        cache.erase(data[key].second);
        cache.push_back(key);
        data[key].second = prev(cache.end());
        return data[key].first;
    }

    void put(int key, int value) {
        if(data.find(key) != data.end()){
            data[key].first = value;
            cache.erase(data[key].second);
            cache.push_back(key);
            data[key].second = prev(cache.end());
        }
        else{
            if(data.size() == capacity){
                data.erase(cache.front());
                cache.pop_front();
            }
            
            cache.push_back(key);
            data[key] = {value, prev(cache.end())};
        }
    }
};

int main(){
    
    int capacity = 2;

    LRUCache* lRUCache = new LRUCache(capacity);

    lRUCache->put(1, 1);                    // cache is {1=1}
    lRUCache->put(2, 2);                    // cache is {1=1, 2=2}
    cout<<lRUCache->get(1)<<"\n";           // return 1
    lRUCache->put(3, 3);                    // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
    cout<<lRUCache->get(2)<<"\n";           // returns -1 (not found)
    lRUCache->put(4, 4);                    // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
    cout<<lRUCache->get(1)<<"\n";           // return -1 (not found)
    cout<<lRUCache->get(3)<<"\n";           // return 3
    cout<<lRUCache->get(4)<<"\n";           // return 4

    return 0;
}