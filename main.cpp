#include <iostream>
#include "swap.h"
#include "bubble.h"
#include "insertion.h"
#include "selection.h"
#include "merge.h"
#include "quick.h"
#include "heap.h"

#include "time.h"

using namespace std;

int main() {
    cout<<"sorting algorithms:"<<endl;

    srand(0);
    int N=100000;
//    N=50;
    int src[N], arr[N];
    for(int i=0;i<N;i++){
        src[i]=rand()%N;
    }


    clock_t start, finish;

    cout<<"ms=microseconds"<<endl;
    cout<<"N="<<N<<endl;

    memcpy(arr, src, N*sizeof(int));
//    cout<<"Testing bubble sort"<<endl;
    start = clock();
    bubble_sort(arr, N);
    finish = clock();
    int bubble_t = double(finish -  start) * 1000000 / CLOCKS_PER_SEC;
    cout<<"bubble_t: "<<bubble_t<<" ms"<<endl;

    memcpy(arr, src, N*sizeof(int));
//    cout<<"Testing insertion sort"<<endl;
    start = clock();
    insertion_sort(arr, N);
    finish = clock();
    int insertion_t = double(finish -  start) * 1000000 / CLOCKS_PER_SEC;
    cout<<"insertion_t: "<<insertion_t<<" ms"<<endl;

    memcpy(arr, src, N*sizeof(int));
//    cout<<"Testing selection sort"<<endl;
    start = clock();
    selection_sort(arr, N);
    finish = clock();
    int selection_t = double(finish -  start) * 1000000 / CLOCKS_PER_SEC;
    cout<<"selection_t: "<<selection_t<<" ms"<<endl;


    memcpy(arr, src, N*sizeof(int));
//    cout<<"Testing merge sort"<<endl;
    start = clock();
    merge_sort(arr, 0, N-1);
    finish = clock();
    int merge_t = double(finish -  start) * 1000000 / CLOCKS_PER_SEC;
    cout<<"merge_t: "<<merge_t<<" ms"<<endl;


    memcpy(arr, src, N*sizeof(int));
//    cout<<"Testing quick sort"<<endl;
    start = clock();
    quick_sort(arr, 0, N-1);
    finish = clock();
    int quick_t = double(finish -  start) * 1000000 / CLOCKS_PER_SEC;
    cout<<"quick_t: "<<quick_t<<" ms"<<endl;

    memcpy(arr, src, N*sizeof(int));
//    cout<<"Testing heap sort"<<endl;
    start = clock();
    heap_sort(arr, N);
    finish = clock();
    int heap_t = double(finish -  start) * 1000000 / CLOCKS_PER_SEC;
    cout<<"heap_t: "<<heap_t<<" ms"<<endl;



    if(N>50){
        return 0;
    }
    cout<<endl<<"Output:"<<endl;
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

/*
sorting algorithms:
Testing bubble sort
bubble_t: 30912000
Testing insertion sort
insertion_t: 6031000
Testing selection sort
selection_t: 10467000
Testing merge sort
merge_t: 32000
Testing quick sort
quick_t: 15000
Testing heap sort
heap_t: 31000
 */
