#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    // Function to perform quicksort
    void quickSort(vector<int>& arr, int low, int high) {

        if (low < high) {

            int pivotIndex = partition(arr, low, high);

            quickSort(arr, low, pivotIndex - 1);

            quickSort(arr, pivotIndex + 1, high);
        }
    }

    // Function to partition the array
    int partition(vector<int>& arr, int low, int high) {

        int pivot = arr[high];

        int i = low - 1;

        for (int j = low; j < high; j++) {

            if (arr[j] <= pivot) {

                i++;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[high]);

        return i + 1;
    }
};

int main() {

    Solution s;

    s.name();

}
