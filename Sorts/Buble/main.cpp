#include <iostream>

using namespace std;

void buble(int* a, int n)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int i = 0; i < n-1; i++)
            if (a[i] > a[i+1])
            {
                swap(a[i], a[i + 1]);
                sorted = false;
            }
        n--;
    }
}

int main()
{
    int n;
    cout << "Give n:\n";
    cin >> n;

    cout << "Give numbers:\n";
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    buble(a, n);

    cout << "Sorted:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
