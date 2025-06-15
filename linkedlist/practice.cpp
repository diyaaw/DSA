#include <iostream>
using namespace std;
int binarysearch(int a[], int n)
{
    int start = 0;
    int end = 9;
    int mid = (start + end) / 2;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            return mid;
        }
        else if (a[i] > n)
        {
            end = mid - 1;
        }
        else if (a[i] < n)
        {
            end = mid + 1;
        }
        else{
            return 0;
        }
    }
}
int main()
{
    int a[10] = {45, 35, 26, 57, 67, 32, 98, 12, 9, 72};
    int n=32;
cout<<binarysearch(a,n);
    return 0;
}