class Solution {
    public int longestUniqueSubstr(String s) {
        int n = s.length();
        int res = 0;

        for (int i = 0; i < n; i++) {
            boolean[] vis = new boolean[256];

            for (int j = i; j < n; j++) {
                if (vis[s.charAt(j)]) {
                    break;
                } else {
                    res = Math.max(res, j - i + 1);
                    vis[s.charAt(j)] = true;
                }
            }
        }

        return res;
    }
}
