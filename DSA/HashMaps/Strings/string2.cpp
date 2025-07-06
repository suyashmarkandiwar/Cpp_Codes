#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void mostFrequentChar(const string& s) {
    unordered_map<char, int> freq;
    int maxFreq = 0;
    char ans = '\0';

    // Count frequencies
    for (char ch : s) {
        freq[ch]++;
        if (freq[ch] > maxFreq) {
            maxFreq = freq[ch];
            ans = ch;
        }
    }

    // In case of tie, find the first character with max frequency
    for (auto ch : freq) {
        if (maxFreq == ch.second) {
            ans = ch.first;
            break;
        }
    }

    cout << "Most frequent character: " << ans << endl;
    cout << "Frequency: " << maxFreq << endl;
}

int main() {
    string s = "aabcdddceae";
    mostFrequentChar(s);
    return 0;
}