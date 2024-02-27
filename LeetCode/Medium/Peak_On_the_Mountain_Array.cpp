// Leetcode #852

/*

    int peakIndexInMountainArray(vector<int>& arr) {
        int len = arr.size();
        int start = 0, end = len - 1, mid;
        while (start < end) {
            mid = start + (end - start) / 2;
            if (arr[mid] < arr[mid + 1]) // Increasing Slope
            {
                start = mid + 1;
            } else if (arr[mid] > arr[mid + 1]) // Decreasing Slope or Peak
            {
                end = mid;
            }
        }
        return start; //start and end both on same block
    }

*/