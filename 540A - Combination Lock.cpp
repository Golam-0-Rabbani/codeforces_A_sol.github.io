#include <bits/stdc++.h>

 

    using namespace std;

int main()
{
     

        ios::sync_with_stdio(0);

     

        cin.tie(0);

    int n, sum;
    string str1, str2;

    cin >> n >> str1 >> str2;

    for (int i = 0; i < n; i++)
    {
        int a, b, x, y;
        a = int(str1[i] - 48);
        b = int(str2[i] - 48);

        if (abs(a - b) >= 5 && a < b)
        {
            x = a + 10;
            sum = sum + x - b;
        }
        else if (abs(a - b) >= 5 && a > b)
        {
            y = b + 10;
            sum = sum + y - a;
        }
        else
        {
            sum = sum + abs(a - b);
        }
    }

    cout << sum;

    return 0;
}