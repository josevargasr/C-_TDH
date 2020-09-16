#include <iostream>
using namespace std;
void hanoi(int num, int A, int C, int B)
{
    if (num == 1)
    {
        cout << A << " -> " << C << endl;
    }
    else
    {
        hanoi(num - 1, A, B, C);
        cout << A << " -> " << C << endl;
        hanoi(num - 1, B, C, A);
    }
}

int main()
{
    cout << "Numero de discos: ";
    int n_discos;
    cin >> n_discos;
    hanoi(n_discos, 1, 3, 2);
    return 0;
}