// Question Link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/

#include<bits/stdc++.h>
using namespace std;
#define takeIntArray(vec, size) { for (int i = 0; i < size; i++) cin >> vec[i]; };
#define LOOP(i, start, end)  for(int i = start; i < end; i++)
#define DISPARR(arr) {for (auto i : arr)  cout << i << ' '; cout << endl;}

int main() {
    int N; cin >> N;
    vector< long long> vec(N);
    takeIntArray(vec, N);
    long long sum = 0;
    int count = 0;
    int maxNum = INT_MIN;
    for(int i = 0; i < N; i++) {
        if (vec[i] >= 0) {
            sum = sum + vec[i];
            count++;
        }
        if (maxNum < vec[i]) {
            maxNum = vec[i];
        }
    }
    if (count)
        cout << sum << " " << count << endl;
    else
        cout << maxNum << " " << 1 << endl;

}