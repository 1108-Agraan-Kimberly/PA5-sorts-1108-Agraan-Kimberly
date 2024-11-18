#include "sorter.h"
using namespace std;

void bubblesort(int size, int nums[], int &swap, int &comps){ 
     swap = 0;
     comps = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            comps++;
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swap++;
            }

        }
    }
}
 
void insertion(int size, int nums[], int &swap2, int &comps2){
    swap2 = 0;
    comps2 = 0;
for (int i = 1; i < size; i++) {
        int sorted = nums[i];
        int j = i - 1;
        comps2++;
        while (j >= 0 && nums[j] > sorted) {
            nums[j + 1] = nums[j];
            swap2++;
            j--;
            comps2++;
        }
        nums[j + 1] = sorted;
        swap2++;
    }
}
int partition(int nums[], int low, int high, int &swap3, int &comps3) {
    int pivot = nums[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        comps3++;
        if (nums[j] < pivot) {
            i++;
            swap(nums[i], nums[j]);
            swap3++;
        }
    }
    swap(nums[i + 1], nums[high]);  
    swap3++;
    return i + 1;
}
void quick(int nums[], int low, int high, int &swap3, int &comps3){
    if (low < high) {
        int pi = partition(nums, low, high, swap3, comps3);
        quick(nums, low, pi - 1, swap3, comps3);
        quick(nums, pi + 1, high, swap3, comps3);
    }
}