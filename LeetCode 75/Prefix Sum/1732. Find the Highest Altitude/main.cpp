class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes(gain.size() + 1, 0);
        int max = altitudes[0];

        for (int i = 0; i < gain.size(); i++) {
            altitudes[i+1] = altitudes[i] + gain[i];
            if (altitudes[i+1] > max) {
                max = altitudes[i+1];
            }
        }

        return max;
    }
};
