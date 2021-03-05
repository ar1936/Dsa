#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    // cin>>n;
    int arr[n] = {2, 4, 3, 5, 1};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // ________BUBBLE SORT ALGORITHM______
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    cout << "After sorting";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
