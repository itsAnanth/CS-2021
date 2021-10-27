#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> ar, int size, int searchValue);

int main() {
    vector<int> array = {12, 22, 34, 47, 55, 67, 82, 98};
    sort(array.begin(), array.end());
    int index = binarySearch(array, array.size(), 82);
    cout << array[index] << " Found at index " << index << endl;
    return 0;
};

int binarySearch(vector<int> ar, int size, int searchValue) {
    int L = 0, H = size - 1;

    int mid;

    while (L <= H) {
        mid = (L + H) / 2;
        if (searchValue == ar[mid])
            return mid;
        else if (searchValue > ar[mid])
            L = mid + 1;
        else
            H = mid - 1;
    }

    return -1;
}
