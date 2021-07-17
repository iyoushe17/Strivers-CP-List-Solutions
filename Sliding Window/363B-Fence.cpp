// Question link: https://codeforces.com/problemset/problem/363/B 

#include<bits/stdc++.h>
using namespace std;
#define takeIntArray(vec, size) { for (int i = 0; i < size; i++) cin >> vec[i]; };
#define LOOP(i, start, end)  for(int i = start; i < end; i++)
#define DISPARR(arr) {for (auto i : arr)  cout << i << ' '; cout << endl;}
#define int long long int
#define print(var) {cout << var;}


void solve() {
    int N, K; cin >> N >> K;
    vector<int> vec(N); takeIntArray(vec, N);
    
    int start(0), end(0), minSum(INT_MAX), sum(0), minStart(0);

    while (end < N) {
        sum += vec[end];
        if (end - start + 1 > K) {
            sum -= vec[start];
            start++;
        }
        if (end - start + 1 == K) {
            if (sum < minSum) {
                minSum = sum;
                minStart = start;
            }
        }
        end++;
    }
    cout << minStart+1<< endl;
    return;
}



int32_t main() {
    

        solve();

    return 0;
}