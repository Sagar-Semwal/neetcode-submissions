class Solution {
   public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> arr;

        int minr = 0;
        int maxr = m - 1;
        int minc = 0;
        int maxc = n - 1;
        int tne = m * n;
        int count = 0;

        while (minr <= maxr && minc <= maxc) {
            for (int i = minc; i <= maxc && count < tne; i++) {
                arr.push_back(matrix[minr][i]);
                count++;
            }
            minr++;

            for (int i = minr; i <= maxr && count < tne; i++) {
                arr.push_back(matrix[i][maxc]);
                count++;
            }

            maxc--;

            for (int i = maxc; i >= minc && count < tne; i--) {
                arr.push_back(matrix[maxr][i]);
                count++;
            }

            maxr--;

            for (int i = maxr; i >= minr && count < tne; i--) {
                arr.push_back(matrix[i][minc]);
                count++;
            }

            minc++;
        }
        return arr;
    }
};
