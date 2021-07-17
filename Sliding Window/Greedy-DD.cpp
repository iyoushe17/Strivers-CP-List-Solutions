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
    
    int start(0), end(0), coins(0), maxCoins(0);

    while(start < N) {
        cout << "start " << start << " end " << end << endl;
        coins += vec[end];

        if (start > end) {
          if (((N - start) + end + 1) > K) {
            coins -= vec[start];
            start++;
          }
          if (((N - start) + end + 1) == K) {
            maxCoins = max(coins, maxCoins);
            
          }
        }
        else {
          if ((end-start+1) > K) {
            coins -= vec[start];
            start++;
          }
           if ((end-start+1) == K) {
            maxCoins = max(coins, maxCoins);
          }
        }       
        cout << " coins " <<  coins << endl;
        end++;
        end = end%N;
    }
    cout << maxCoins << endl;

    return;
}



int32_t main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}