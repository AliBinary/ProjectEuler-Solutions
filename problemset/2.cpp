/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 25.11.2024 23:00:38
*/
// Even Fibonacci Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n = 4000000;

    long long a = 1, b = 2, c = 3;
    long long ans = 2;

    while (c <= n)
    {
        if (c % 2 == 0)
            ans += c;
        a = b;
        b = c;
        c = a + b;
    }
    cout << ans;
}