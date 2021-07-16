/**
 * @file 05. alarm clock.cpp
 * @author Kdelphinus (delphinus@khu.ac.kr)
 * @brief 
 * @date 2021-07-16 19:07:26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    if (h == 0 && m < 45)
        cout << 23 << " " << m + 15;
    else if (m < 45)
        cout << h - 1 << " " << m + 15;
    else
        cout << h << " " << m - 45;

    return 0;
}