class Solution 
{
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) 
        {
            unordered_map<int, int> frequency;
            for (int num : nums)
            {
                ++frequency[num];
            }

            vector<pair<int, int>> entries(frequency.begin(), frequency.end());

            sort(entries.begin(), entries.end(), [](const auto& a, const auto& b)
            {
                return a.second > b.second;
            });

            vector<int> result;
            for (int i = 0; i < k; i++)
            {
                result.push_back(entries[i].first);
            }

            return result;
        }
};