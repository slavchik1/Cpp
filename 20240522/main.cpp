#include <iostream>
#include <chrono>
#include <vector>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

void measure_cache_latency(size_t array_size) {
    vector<int> array(array_size);
    size_t accesses = 1000000;
    size_t index = 0;
    int dummy = 0;
    
    
    for (size_t i = 0; i < array_size; i++) {
        array[i] = rand();
    }
    
    auto start = high_resolution_clock::now();
    
    for (size_t i = 0; i < accesses; i++) {
        dummy += array[index];
        index = (index + 1) % array_size;
    }
    
    auto end = high_resolution_clock::now();
    duration<double> diff = end - start;
    double averge_latancy = diff.count() / accesses * 1e9;
    
    cout << "Array size: " << array_size * sizeof(int) / 1024 << " KB, "
    << "Averge latance: " << averge_latancy << " ns" << endl; 
}

int main() {
    cout << "Cache Latency Measurement" << endl;
    cout << "-------------------------" << endl;
    
    for (size_t array_size = 1024; array_size <= 32 * 1024 * 1024; array_size *= 2) {
        measure_cache_latency(array_size);
    }
}
