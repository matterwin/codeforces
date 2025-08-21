// https://codeforces.com/problemset/problem/1538/A
#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
using namespace std;
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL);
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define fset(arr, val) memset(arr, val, sizeof(arr))
#define fset(arr, val) memset(arr, val, sizeof(arr))
#define fcopy(dest, src) memcpy(dest, src, sizeof(dest))
#define fmove(dest, src) memmove(dest, src, sizeof(dest))
#define fcmp(arr1, arr2) memcmp(arr1, arr2, sizeof(arr1))
#define sci(x) scanf("%d", &x)
#define scll(x) scanf("%lld", &x)
#define scs(str) scanf("%s", str)
#define scf(x) scanf("%f", &x)
#define scd(x) scanf("%lf", &x)
#define scc(x) scanf(" %c", &x)
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define prv1d(vec) for (const auto& x : vec) std::cout << x << " "; std::cout << "\n";
#define prv2d(vec2d) do { for (const auto& row : vec2d) { for (const auto& x : row) std::cout << x << " "; std::cout << "\n"; } } while(0)

void solve()
{
  int n; sci(n);

  int mn_i = -1, mx_i = -1;
  for (int i=1; i<=n; i++) 
  {
    int s;
    sci(s);
    if (s == 1)
      mn_i = i;
    else if (s == n)
      mx_i = i;
  }

  int op1 = max(mn_i, mx_i);
  int op2 = max(n - mn_i + 1, n - mx_i + 1);
  int op3 = mn_i + (n - mx_i + 1);
  int op4 = mx_i + (n - mn_i + 1);

  cout << min({op1, op2, op3, op4}); 

  nl;
}

int main()
{
  fast;
  int t;
  scanf("%d",&t);
  while (t--) solve();
  return 0;
}

