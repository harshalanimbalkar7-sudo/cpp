#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }

    return true;
}


#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {

    if (s.length() != t.length())
        return false;

    int freq[26] = {0};

    for (char ch : s)
        freq[ch - 'a']++;

    for (char ch : t)
        freq[ch - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}


#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {

    int freq[26] = {0};

    for (char ch : s)
        freq[ch - 'a']++;

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i] - 'a'] == 1)
            return i;
    }

    return -1;
}


//02-09-26
class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxDepth = 0;

        for (char ch : s) {
            if (ch == '(') {
                depth++;
                maxDepth = max(maxDepth, depth);
            }
            else if (ch == ')') {
                depth--;
            }
        }

        return maxDepth;
    }
};

class Solution {
public:
    string frequencySort(string s) {

        // Step 1: Count frequency of every character
        unordered_map<char, int> freq;

        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Store {character, frequency}
        vector<pair<char, int>> arr;

        for (auto it : freq) {
            arr.push_back({it.first, it.second});
        }

        // Step 3: Sort by frequency in decreasing order
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Step 4: Build answer
        string ans = "";

        for (auto &p : arr) {

            char ch = p.first;
            int count = p.second;

            while (count--) {
                ans += ch;
            }
        }

        return ans;
    }
};

//04-09-26

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;

    int freq[26] = {0};

    for (char c : s)
        freq[c - 'a']++;

    for (char c : t)
        freq[c - 'a']--;

    for (int x : freq) {
        if (x != 0)
            return false;
    }

    return true;
}