//Author: Kimberly Agraan
//Due Date: 11/10/2024
//Purpose: Sorting HW 5
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "sorter.h"
using namespace std;

#define ONE 10
// #define ONE 10
// #define ONE 10

void generator(int values, int holdVal[] ){
    for(int i = 0; i < values; i++){
        holdVal[i] = rand() % 1000000 + 1;
    }
}

int main(){
srand(time(0));

int nums[ONE], num2[ONE], num3[ONE];
int swap = 0, comps = 0, swap2 = 0, comps2 = 0, swap3 = 0, comps3 = 0;
int values = ONE;
int values2 = ONE; // used to read the array
int values3 = ONE;

generator(ONE, nums);
generator(ONE, num2);
generator(ONE, num3);
//bubble sort
bubblesort(ONE, nums, swap, comps);
 ofstream oneK("oneK.csv"); //1k file
    oneK << "Swaps,Comparisons\n";
    oneK << swap << "," << comps << endl;

bubblesort(ONE, num2, swap, comps);
 ofstream tenK("tenK.csv"); //10k file
    tenK << "Swaps,Comparisons\n";
    tenK << swap << "," << comps << endl;

bubblesort(ONE, num3, swap, comps);
 ofstream hunK("hunK.csv"); //100k file
    hunK << "Swaps,Comparisons\n";
    hunK << swap << "," << comps << endl;

insertion(ONE, nums, swap2, comps2); //insertion
    oneK << swap2 << "," << comps2 << endl;
insertion(ONE, num2, swap2, comps2);
    tenK << swap2 << "," << comps2 << endl;
insertion(ONE, num3, swap2, comps2);
    hunK << swap2 << "," << comps2 << endl;
quick(nums, 0, ONE - 1, swap3, comps3);
    oneK << swap3 << "," << comps3 << endl;
quick(nums, 0, ONE - 1, swap3, comps3);
    tenK << swap3 << "," << comps3 << endl;
quick(nums, 0, ONE - 1, swap3, comps3); //quicksort
    hunK << swap3 << "," << comps3 << endl;
return 0;
}
