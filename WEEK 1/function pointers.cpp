#include <bits/stdc++.h>

void forEach(std::vector<int>& arr, void (*callback)(int&));
void print(int& i);
void increment(int& i);

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    forEach(arr, increment);
    forEach(arr, print);
    return 0;
}

void forEach(std::vector<int>& arr, void (*callback)(int&)) {
    for (int i = 0; i < arr.size(); i++)
        callback(arr[i]);
}

void increment(int& i) {
    i++;
}

void print(int& i) {
    std::cout << i << " ";
}