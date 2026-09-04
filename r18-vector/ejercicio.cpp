#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    std::size_t cap = v.capacity();
    std::cout << "Size 0 -> capacity " << cap << '\n';
    for (int i = 0; i < 1000; ++i){
        v.push_back(i);
        if (v.capacity() != cap){
            cap = v.capacity();
            std::cout << "Size " << v.size() << " -> capacity " << cap << '\n';
            
        }
    }
    
}