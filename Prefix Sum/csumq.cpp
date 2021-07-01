#include<bits/stdc++.h>
using namespace std;
// int array input of size N
#define takeIntArray(vec, size) { for (int i = 0; i < size; i++) cin >> vec[i]; };
#define LOOP(i, start, end)  for(int i = start; i < end; i++)
int main() {
    int N; cin >> N;
    long long totalSum = 0;
    vector<int> vec(N+10);
    takeIntArray(vec, N);
    int Q; cin >> Q;
    // LOOP(i, 0, N) {
    //     totalSum += vec[i];
    // }
    vector<int> fw(N+10);
    // vector<int> bw(N+10);

    fw[0] = 0;
    LOOP(i, 1, N+1) {
        fw[i] = fw[i-1] + vec[i-1];
    }
    // for (int i = N; i >= 1; i--) {
    //     bw[i] += bw[i+1];
    // }
    while(Q--) {
        int L, R; cin >> L >> R;
        L++; R++;
        cout << fw[R] - fw[L-1] << endl; 
    }



    
}