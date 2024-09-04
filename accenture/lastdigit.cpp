#include <bits/stdc++.h>
using namespace std;

void lastdigit(int a)
{
    if (a < 0)
        cout << "wrong output";
    int sq = a * a;
    while (a > 0)
    {
        if (a % 10 != (sq % 10))
        {
            cout << "incorrect";
            return;
        }
        a = a / 10;
        sq = sq / 10;
    }
    cout << "correct";
}
int main()
{
    lastdigit(25);
    return 0;
}
