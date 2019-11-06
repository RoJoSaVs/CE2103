#include<iostream>


/* C++ implementation of QuickSort */
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void createArr(int max[]){
    for(int i=0;i<100;i++){
        int v1 = rand() % INT_MAX;         // v1 in the range 0 to 99
        max[i]=v1;
    }
}

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//************************************************************************************




int fibo(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}


//Fibonacci Series using Dynamic Programming
#include<stdio.h>

int fib(int n)
{

    int f[n+2];   // 1 extra para n=0
    int i;

    //casos base
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}

int main()
{
    cout<<"\n         FIBONACCI \n\n";

    int i, num ;



    auto start = high_resolution_clock::now();
    fib(20);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    std::cout<<duration.count()<<" tiempo"<<endl;

    return 0;
}