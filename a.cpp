#include <iostream>
#include <vector>
#include <thread>
#include <future>
#include <chrono>

class ParallelSum {
public:
    ParallelSum(std::vector<int>& data) : data(data) {}

    int computeSum() {
        size_t mid = data.size() / 2;
        auto handle1 = std::async(std::launch::async, &ParallelSum::partialSum, this, 0, mid);
        auto handle2 = std::async(std::launch::async, &ParallelSum::partialSum, this, mid, data.size());
        return handle1.get() + handle2.get();
    }

private:
    std::vector<int>& data;

    int partialSum(size_t start, size_t end) {
        int sum = 0;
        for (size_t i = start; i < end; ++i) {
            sum += data[i];
        }
        return sum;
    }
};

int main() {
    std::vector<int> numbers(1000);
    for (int i = 0; i < 1000; ++i) {
        numbers[i] = i + 1;
    }

    ParallelSum ps(numbers);
    int total = ps.computeSum();
    
    std::cout << "Total sum: " << total << std::endl;
    return 0;
}
