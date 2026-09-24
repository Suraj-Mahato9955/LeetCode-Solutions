class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();

        if (n == 1)
            return A[0];

        int st = 0;
        int end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // First element
            if (mid == 0 && A[0] != A[1])
                return A[mid];

            // Last element
            if (mid == n - 1 && A[n - 1] != A[n - 2])
                return A[mid];

            // Single element found
            if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1])
                return A[mid];

            // Even index
            if (mid % 2 == 0) {

                if (A[mid - 1] == A[mid]) {
                    // Pair is on left
                    end = mid - 1;
                } 
                else {
                    // Pair is on right
                    st = mid + 1;
                }

            } 
            // Odd index
            else {

                if (A[mid - 1] == A[mid]) {
                    // Pair is complete on left,
                    // single element must be on right
                    st = mid + 1;
                } 
                else {
                    // Single element is on left
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};