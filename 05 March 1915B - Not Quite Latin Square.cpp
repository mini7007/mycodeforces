#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

using ll = long long;
using ld = long double;
using str = string;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define mp make_pair

using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<ld>;
using vs = vector<str>;
using vc = vector<char>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 998244353; // 1e9 + 7;

void solve()
{
    int cntA = 0, cntB = 0, cntC = 0;
    for (int i = 0; i < 9; i++)
    {
        char c;
        cin >> c;

        if (c == 'A')
            cntA++;
        if (c == 'B')
            cntB++;
        if (c == 'C')
            cntC++;
    }

    if (cntA < 3)
        cout << "A\n";
    if (cntB < 3)
        cout << "B\n";
    if (cntC < 3)
        cout << "C\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}
