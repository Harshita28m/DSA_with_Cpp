#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s ="tree";
    vector<int> v(150, 0);
    for (int i = 0; i < s.size(); i++) {
        int idx = int(s[i]);
        v[idx]++;
    }

    vector<pair<int, char>> freq_chars;
    for (int i = 0; i < 150; i++) {
        if (v[i] > 0) {
            freq_chars.push_back({v[i], char(i)});
        }
    }
    sort(freq_chars.rbegin(), freq_chars.rend());

    string ans = "";
    for (auto& p : freq_chars) {
        ans += string(p.first, p.second);
    }

    cout << ans << endl;
    
    return 0;
}
