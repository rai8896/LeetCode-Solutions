class Solution {
public:
    int solve(vector<int>& dist, double hour, int speed) {
        double time = 0;
        int n = dist.size();
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                time += (double)dist[i] / speed;
            } else {
                time+=ceil((double)dist[i]/speed);
            }
        }
        return time <= hour;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {

        int left = 1;
        int right = 100000000;
        int ans = INT_MAX;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (solve(dist, hour, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        if (ans == INT_MAX) {
            return -1;
        } else {
            return ans;
        }
    }
};