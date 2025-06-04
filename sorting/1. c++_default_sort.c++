#include<iostream>
#include<algorithm>
#include<vector>
int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};
    std::sort(numbers.begin(), numbers.end());
    // The default sort is in ascending order
    std::cout << "Sorted numbers in ascending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    // The default sort is in descending order
    std::cout << "\nSorted numbers in descending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}