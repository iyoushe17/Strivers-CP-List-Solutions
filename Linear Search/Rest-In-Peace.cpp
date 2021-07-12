// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/rest-in-peace-21-1/
#include<bits/stdc++.h>
using namespace std;
#define takeIntArray(vec, size) { for (int i = 0; i < size; i++) cin >> vec[i]; };
#define LOOP(i, start, end)  for(int i = start; i < end; i++)
#define DISPARR(arr) {for (auto i : arr)  cout << i << ' '; cout << endl;}
#define int long long int
#define print(var) {cout << var;}


void solve(int n) {
    if (n % 21 == 0) {
        cout << "The streak is broken!" << endl;
        return;
    }
    else {
        int num = n;
        int idx = 0;
        int idx10;
        while (num > 0) {
            idx++;
            if(num % 10 == 1) {
                idx10 = idx;
            }
            if (num % 10 == 2 and idx == idx10+1) {
                cout << "The streak is broken!" << endl;
                return;
            }
            num = num / 10;
        }
    }
    cout << "The streak lives still in our heart!" << endl;
    return;
}



int32_t main() {
    int t; cin >> t;
    while(t--) {
        int N;
        cin >> N;
        solve(N);
    }
    return 0;
}