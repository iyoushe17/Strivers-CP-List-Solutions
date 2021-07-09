// QUESTION LINK: https://www.codechef.com/problems/BLONDIE

#include<bits/stdc++.h>
using namespace std;
#define takeIntArray(vec, size) { for (int i = 0; i < size; i++) cin >> vec[i]; };
#define LOOP(i, start, end)  for(int i = start; i < end; i++)

int main() {
    int T; cin >> T;
        while(T--) {
            int N; cin >> N;
            vector<long long> vec(N);
            takeIntArray(vec, N);
            LOOP(i, 0, N)
                cout << vec[i] << " ";
            cout << endl;
            long long sum = 0;
            LOOP(i, 0, N) {
                if (vec[i] == -1) {
                    vec[i] = sum/i;
                    sum += vec[i];
                }
                else 
                    sum = sum + vec[i];
            }
            LOOP(i, 0, N)
                cout << vec[i] << " ";
        cout << endl;
    }
}