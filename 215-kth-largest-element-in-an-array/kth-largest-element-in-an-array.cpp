class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> minHeap;

        for (int num : nums) {
            if (minHeap.size() < k) {
                minHeap.push_back(num);
                push_heap(minHeap.begin(), minHeap.end(), greater<int>());
            } else if (num > minHeap.front()) {
                pop_heap(minHeap.begin(), minHeap.end(), greater<int>());
                minHeap.pop_back();

                minHeap.push_back(num);
                push_heap(minHeap.begin(), minHeap.end(), greater<int>());
            }
        }
        return minHeap.front();
    }
};