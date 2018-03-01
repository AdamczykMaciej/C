#include <iostream>
#include <cmath>

using namespace std;
int solve(int n, int p)
{
    // Complete this function
    int count = 0;
    if (n % 2 != 0)
        n -= 1;

    if (abs(n - p) > (p - 1))
    {
        int page = 1;
        while (page < p)
        {
            page += 2;
            count++;
        }
    }
    else
    {
        int page = n;
        while (page > p)
        {
            page -= 2;
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
