#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {

    stringstream ss(s);

    vector<string> words;
    string word;

    while (ss >> word)
        words.push_back(word);

    reverse(words.begin(), words.end());

    string ans;

    for (int i = 0; i < words.size(); i++) {

        if (i > 0)
            ans += " ";

        ans += words[i];
    }

    return ans;
}


#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {

    int freq[256] = {0};

    int left = 0;
    int ans = 0;

    for (int right = 0; right < s.length(); right++) {

        freq[s[right]]++;

        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    return ans;
}

#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) {

    vector<int> ans;

    if (p.length() > s.length())
        return ans;

    int need[26] = {0};
    int window[26] = {0};

    for (char c : p)
        need[c - 'a']++;

    int k = p.length();

    for (int i = 0; i < s.length(); i++) {

        window[s[i] - 'a']++;

        if (i >= k)
            window[s[i - k] - 'a']--;

        if (i >= k - 1) {

            bool same = true;

            for (int j = 0; j < 26; j++) {
                if (need[j] != window[j]) {
                    same = false;
                    break;
                }
            }

            if (same)
                ans.push_back(i - k + 1);
        }
    }

    return ans;
}