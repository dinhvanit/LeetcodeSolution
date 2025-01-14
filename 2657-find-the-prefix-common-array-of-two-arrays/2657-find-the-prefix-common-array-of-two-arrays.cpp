class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> C(n, 0);
        unordered_set<int> setA, setB;

        for (int i = 0; i < n; ++i) {
            setA.insert(A[i]);
            setB.insert(B[i]);
            int cnt = 0;
            for (int x : setA) {
                if (setB.count(x)) {
                    cnt++;
                }
            }
            C[i] = cnt;
        }

        return C;
    }
};