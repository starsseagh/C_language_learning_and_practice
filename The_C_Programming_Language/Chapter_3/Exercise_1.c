/*
 * 在上面有关折半查找的例子中，while循环语句内共执行了两次测试，其实只要
 * 一次就够（代价是将更多的测试在循环外执行）。重写该函数，使得在循环内部
 * 只执行一次测试。比较两种版本函数的运行时间。
 */
#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n);  /*  Original K&R function  */
int binsearch2(int x, int v[], int n); /*  Our new function       */

#define MAX_ELEMENT 20000

/*  Outputs approximation of processor time required
    for our two binary search functions. We search for
    the element -1, to time the functions' worst case
    performance (i.e. element not found in test data)   */
int main(void)
{
    int testdata[MAX_ELEMENT];
    int index;  /*  Index of found element in test data  */
    int n = 10; /*  Element to search for  */
    int i;
    clock_t time_taken;

    /*  Initialize test data  */
    for (i = 0; i < MAX_ELEMENT; ++i)
        testdata[i] = i;

    /*  Output approximation of time taken for
        100,000 iterations of binsearch()       */
    for (i = 0, time_taken = clock(); i < 1000000; ++i)
    {
        index = binsearch(n, testdata, MAX_ELEMENT);
    }
    time_taken = clock() - time_taken;

    if (index < 0)
        printf("Element %d not found.\n", n);
    else
        printf("Element %d found at index %d.\n", n, index);

    printf("binsearch() took %lu clocks (%lu seconds)\n",
           (unsigned long)time_taken,
           (unsigned long)time_taken / CLOCKS_PER_SEC);

    /*  Output approximation of time taken for
        100,000 iterations of binsearch2()        */
    for (i = 0, time_taken = clock(); i < 1000000; ++i)
    {
        index = binsearch2(n, testdata, MAX_ELEMENT);
    }
    time_taken = clock() - time_taken;

    if (index < 0)
        printf("Element %d not found.\n", n);
    else
        printf("Element %d found at index %d.\n", n, index);

    printf("binsearch2() took %lu clocks (%lu seconds)\n",
           (unsigned long)time_taken,
           (unsigned long)time_taken / CLOCKS_PER_SEC);

    return 0;
}

/*  Performs a binary search for element x
        in array v[], which has n elements      */
int binsearch(int x, int v[], int n)
{
    int low, mid, high;

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

/*  Implementation of binsearch() using
    only one test inside the loop        */
int binsearch2(int x, int v[], int n)
{
    int low, high, mid;

    low = -1;
    high = n;
    while (low + 1 < high)
    {
        mid = (low + high) / 2;
        if (x > v[mid])
            low = mid;
        else
            high = mid;
    }
    if (high == n || v[high] != x)
        return -1;
    else
        return high;
}