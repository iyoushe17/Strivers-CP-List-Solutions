// Question Link: https://www.codechef.com/problems/SEGM01

#include<bits/stdc++.h>
using namespace std;
#define takeIntArray(vec, size) { for (int i = 0; i < size; i++) cin >> vec[i]; };
#define LOOP(i, start, end)  for(int i = start; i < end; i++)
#define DISPARR(arr) {for (auto i : arr)  cout << i << ' '; cout << endl;}



string soln(string s) {
    int count(0);
    LOOP(i, 0, s.size()) {
        if (i == 0) {
            if (s[i] == '1')
                count++;
        }
        else {
            if (s[i] == '1') {
                if (s[i-1] == '0' and count != 0) {
                    return "NO";
                }
                count++;
            }
        }
    }
    if (count == 0) {
        return "NO";
    }
    return "YES";
}


int main() {
    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << soln(s) << endl;
    }
}