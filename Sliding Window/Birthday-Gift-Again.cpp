#include<bits/stdc++.h>
using namespace std;
#define takeIntArray(vec, size) { for (int i = 0; i < size; i++) cin >> vec[i]; };
#define LOOP(i, start, end)  for(int i = start; i < end; i++)
#define DISPARR(arr) {for (auto i : arr)  cout << i << ' '; cout << endl;}
#define int long long int
#define print(var) {cout << var;}


void solve(string s) {
    int count(0), x(1);
    int window = x + (x*x);
    while (window <= s.size()) {
        int start = 0, end = 0, cnt1(x);
        while (end < s.size()) {
            if (s[end] == '1') cnt1--;
            if ((end-start+1) > window) {
                if (s[start] == '1')  cnt1++;
                start++;
            }
            if ((end - start + 1) == window) {
                if (cnt1 == 0) {
                    count++;
                }
            }
            end++;
        }
        x++;
        window = x + (x*x);
    }
    cout << count << endl;
    return;
}


int32_t main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        solve(s);
    }
    return 0;
}