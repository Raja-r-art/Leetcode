class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i = 0;
        int n = nums.size();
        int idx = -1;

        vector<int> maxi(n);
        vector<int> mini(n);

        maxi[0] = nums[0];
        for (int a = 1; a < n; a++) {
            maxi[a] = max(maxi[a - 1], nums[a]);
        }

        mini[n - 1] = nums[n - 1];
        for (int b = n - 2; b >= 0; b--) {
            mini[b] = min(mini[b + 1], nums[b]);
        }

        while (i < n) {
            int sum2 = maxi[i] - mini[i];

            if (sum2 <= k) {
                idx = i;
                break;
            }

            i++;
        }

        return idx;
    }
};