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