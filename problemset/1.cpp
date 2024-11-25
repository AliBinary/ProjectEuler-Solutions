/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 25.11.2024 22:51:55
*/
// Multiples of 3 or 5

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 999;

    int ans = 0;

    for (int i = n; i >= 1; i--)
    {
        if (i % 3 and i % 5)
            continue;
        ans += i;
    }
    cout << ans;
}