#include <bits/stdc++.h>
using namespace std;
template <typename T>
void SortArray(T arr[], int size)
{
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int size, limit;
    cin >> size >> limit;
    int arr[size]; // Here we can change datatype of array for different type of arrays
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    if (limit == 1)
        SortArray<int>(arr, size);
    // else if (limit == 2)
    //     PrintArray<string>(arr, size);
    // else
    //     PrintArray<float>(arr, size);
    return 0;
}