#include<iostream>

using namespace std;
void HeapAdjustDown(int *arr, int i, int size)
{
    int temp = arr[i];
    int lchild = 2 * i;
    int rchild = 2 * i + 1;
    int max = i;
    if (i <= size/2)
    {
        if(lchild <= size && arr[lchild] > arr[max])
        {
            max = lchild;
        }
        if (rchild <= size && arr[rchild] > arr[max])
        {
            max = rchild;
        }
        if(max != i)
        {
            arr[i] = arr[max];
            arr[max] = temp;
            HeapAdjustDown(arr, max, size);
        }

    }
}
void build_bheap(int *a, int size){
    int i;
    for(i = size/2; i>=1; i--)
    {
        HeapAdjustDown(a, i, size);
    }
}

void Heapsort(int *a, int size)
{
    int i;
    int temp;
    build_bheap(a, size);
    for(i=size; i>=1; i--)
    {
        temp = a[1];
        a[1] = a[i];
        a[i] = temp;
        HeapAdjustDown(a, 1, i--);
    }
}
int main(int argc, char* argv[])
{
    int a[]={0, 16, 20,3,11, 17, 8};
    int size = sizeof(a)/sizeof(int) - 1;
    int i;
    printf("size= %d\n", size);
    Heapsort(a, size);
    printf("Sort off");
    for (i=1; i <= size; i++)
    {
        printf("%d", a[i]);
    }
    system("pause");
    return 0;
    
}