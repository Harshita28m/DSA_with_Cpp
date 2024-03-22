#include <string>
#include <vector>
#include <algorithm>

string frequencySort(string s) {
        vector<int> v(256, 0);
        for (char c : s) {
            int idx = int(c);
            v[idx]++;
        }
        
        
        vector<pair<int, char>> freq_chars;
        for (int i = 0; i < 256; i++) {
            if (v[i] > 0) {
                freq_chars.push_back({v[i], char(i)});
            }
        }
        
        
        sort(freq_chars.rbegin(), freq_chars.rend());
        
        
        string ans = "";
        for (auto& p : freq_chars) {
            ans += string(p.first, p.second);
        }
        
        return ans;
    }
int main(){
    
}
