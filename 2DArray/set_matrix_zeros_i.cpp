// --> time complexity --> O(n^2);

class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();

        vector<int> col(m);
        vector<int> row(n);

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 0) {
                    count++;
                    col.push_back(j);
                    row.push_back(i);
                }
            }
        }

        int st = 0;
        int v1, v2;
        while (st != count) {
            v1 = col[st + m];
            v2 = row[st + n];

            for (int i = 0; i < n; i++) {
                arr[i][v1] = 0;
            }
            for (int j = 0; j < m; j++) {
                arr[v2][j] = 0;
            }
            st++;
        }
    }
};