class Solution {
public:
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();

        vector<pair<int, int>> meetings;

        // Store {end time, start time}
        for (int i = 0; i < n; i++) {
            meetings.push_back({end[i], start[i]});
        }

        // Sort meetings by ending time
        sort(meetings.begin(), meetings.end());

        int count = 0;
        int lastEnd = -1;

        for (int i = 0; i < n; i++) {
            int meetingStart = meetings[i].second;
            int meetingEnd = meetings[i].first;

            // Select meeting only if it starts after last meeting ends
            if (meetingStart > lastEnd) {
                count++;
                lastEnd = meetingEnd;
            }
        }

        return count;
    }
};