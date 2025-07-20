class Solution {
public:
    int peakElement(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int left = (mid == 0) ? INT_MIN : arr[mid-1];
            int right = (mid == n-1) ? INT_MIN : arr[mid+1];

            if (arr[mid] > left && arr[mid] > right)
                return mid;
            else if (arr[mid] < left)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1; // Should never be reached for valid input
    }
};
