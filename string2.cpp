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