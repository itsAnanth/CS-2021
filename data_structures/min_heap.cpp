#include <iostream>
#include <vector>

/**
 * (i - 1) / 2 -> parent node
 * (2 * i) + 1 -> left node
 * (2 * i) + 2 -> right node
 */
using std::vector;
using std::cout;

class Heap {
    public:
        vector<int> heap;
    public:
        Heap() {};
        int parent(int);
        int left(int);
        int right(int);
        int getMin();
        int getMax();
        int height();
        void insertKey(int);
        void deleteKey();
        void heapify();
        int linearSearch(int);
        void print();
        void swap(int &, int &);
};

int main() {
    Heap heap;
    heap.insertKey(5);
    heap.insertKey(8);
    heap.insertKey(7);
    heap.insertKey(3);

    heap.print();
}

void Heap::insertKey(int key) {
    heap.push_back(key);
    int i = heap.size() - 1;
    cout << i << '\n';

    while (i != 0 && heap[parent(i)] > heap[i]) {
        cout << heap[parent(i)] << " " << heap[i];
        swap(heap[i], heap[parent(i)]);
        i = parent(i);
        cout << " " << i << std::endl; 
    }
}

void Heap::print() {
    for (int i : heap)
        cout << i << " ";
    cout << '\n';
}

int Heap::linearSearch(int key) {
    for (int i = 0; i < heap.size(); i++)
        if (heap[i] == key) return i;
    return -1;
}

int Heap::parent(int key) {
    return (key - 1) / 2;
}

int Heap::left(int key) {
    return (2 * key) + 1;
}

int Heap::right(int key) {
    return (2 * key) + 2;
}

void Heap::swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}