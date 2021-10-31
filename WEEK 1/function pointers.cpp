#include <bits/stdc++.h>

void forEach(const std::vector<int> &, void(*func)(int));
void print(int i);

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    forEach(arr, print);
    return 0;
}

void forEach(const std::vector<int> & arr, void(*callback)(int)) {
    for (int i : arr)
        callback(i);
}

void print(int i) {
    std::cout << i << " ";
}