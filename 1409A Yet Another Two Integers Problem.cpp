#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {

            int diff = abs(a - b);

            int arr[11] = {};
            int answer = 0;
            for (int i = 10; i > 0; i--)
            {
                arr[i] = diff / i;
                diff -= arr[i] * i;
                answer += arr[i];
            }

            cout << answer << endl;
        }
    }

    return 0;
}