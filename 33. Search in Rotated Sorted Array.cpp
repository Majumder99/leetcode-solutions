class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>v;
        v = nums;
        sort(v.begin(), v.end());
        int low = 0;
        int high = v.size() - 1;
        int mid = 0;
        while (low <= high)
        {
            mid = (low + high) / 2;
            int s = v[mid];
            if (target > s)
            {
                low = mid + 1;
            }
            else if (target < s)
            {
                high = mid - 1;
            }
            else if (target == s)
            {
                auto result = find(nums.begin(), nums.end(), target);
                if (result != end(nums)){
                int index = distance(nums.begin(), result);
               return index;}
            }
        }
        return -1;
    }
};