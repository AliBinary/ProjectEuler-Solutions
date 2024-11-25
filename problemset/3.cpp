/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 25.11.2024 23:10:57
*/
// Largest Prime Factor

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n = 600851475143;

    // n /= 2;

    for (long long i = sqrt(n); i >= 2; i--)
    {
        if (n % i == 0)
        {
            bool flag = true;
            for (long long j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << i;
                break;
            }
        }
    }
}