class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floorVal = -1;
        int ceilVal = -1;

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] <= x) {
                // Update floor to be the max value ≤ x
                floorVal = max(floorVal, arr[i]);
            }
            if (arr[i] >= x) {
                // If ceilVal not set yet, set it to current
                if (ceilVal == -1)
                    ceilVal = arr[i];
                else
                    ceilVal = min(ceilVal, arr[i]); // update only if smaller
            }
        }

        return {floorVal, ceilVal};
    }
};
