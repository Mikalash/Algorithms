#include <iostream>

using namespace std;

int main()
{
    int x;
    int n;

    cout << "Give number\n";
    cin >>  x;

    cout << "\nAll bits:\n";
    for (int i = 0; i < sizeof(int) * 8; i++)
        cout << (bool)(x & (1 << i)) << " ";
    cout << "\n";

    return 0;
}
