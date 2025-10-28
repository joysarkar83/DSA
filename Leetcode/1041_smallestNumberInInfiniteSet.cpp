#include <iostream>
#include <unordered_set>
using namespace std;

class SmallestInfiniteSet {
public:
    int smallest;
    unordered_set<int> deleted;

    SmallestInfiniteSet() {
        smallest = 1;
        deleted.clear();
    }
    
    int popSmallest() {
        while(true){
            if(deleted.count(smallest) == 0){
                deleted.emplace(smallest);
                return smallest++;
            }else{
                smallest++;
            }
        }
    }
    
    void addBack(int num) {
        if(deleted.count(num) != 0){
            deleted.erase(num);
        }
        smallest = min(smallest, num);
    }
};

int main(){

    return 0;
}