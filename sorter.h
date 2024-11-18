#ifndef SORTER
#define SORTER
#include <fstream>
#include <dirent.h>
void bubblesort(int size, int nums[], int &swap, int &comps); 
void insertion(int size, int nums[], int &swap, int &comps);
int partition(int nums[], int low, int high, int &swap3, int &comps3);
void quick(int nums[], int low, int high, int &swap3, int &comps3);
#endif