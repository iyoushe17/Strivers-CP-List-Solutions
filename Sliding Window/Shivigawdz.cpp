// Question Link: https://www.codechef.com/problems/SHIVIGOD

#include<bits/stdc++.h>
using namespace std;
#define takeIntArray(vec, size) { for (int i = 0; i < size; i++) cin >> vec[i]; };
#define LOOP(i, start, end)  for(int i = start; i < end; i++)
#define DISPARR(arr) {for (auto i : arr)  cout << i << ' '; cout << endl;}
#define int long long int
#define print(var) {cout << var;}

void solve(int N, int B, int A, vector<int>vec) {
    long double avgSum, ans(INT_MIN);
    int sum = 0, start, end;
    for (int i = A; i <= B; i++) {
        sum = 0;
        start = 0, end = i-1;

        for (int j = 0; j < i; j++) {
            sum += vec[j];
        }
        // cout << " sum: " << sum;
        avgSum = (sum * 1.0)/(i * 1.0);
        // cout  << " avgsum: " << avgSum;
        ans = max(avgSum, ans);
        // cout << " ans: " << ans;

        while(end + 1 < vec.size()) {
            // cout << endl << " while " << endl;
            sum -= vec[start]; 
            start++;
            end ++;
            sum += vec[end]; 
            avgSum = (sum * 1.0)/(i * 1.0); 
            ans = max(avgSum, ans); 
        }
    }
    cout << setprecision(7) << fixed << ans << endl;
    return;
    
}


int32_t main() {
    int t; cin >> t;
    while(t--) {
        int N, B, A;
        cin >> N >> B >> A;
        vector<int> vec(N);
        takeIntArray(vec, N);
        solve(N, B, A, vec);
    }
    return 0;
}