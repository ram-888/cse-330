//User function Template for C++
class Solution
{
public:
vector<int> F; string R; int p, k;
bool dfs(int v, int c) {
    if (!c) return true;
    for (int d = 0; d < k; d++) {
        int vn = v%p*k + d;
        if (!F[vn]) {
            F[vn] = 1; R.push_back('0'+d);
            if (dfs(vn, c-1)) return true;
            F[vn] = 0; R.pop_back();
        }
    }
    return false;
}
string findString(int n, int k) {
    int N=(int)pow(k, n); this->k=k, p=(int)pow(k, n-1);
    F.resize(N); F[0]=1; R.assign(n, '0');
    dfs(0, N - 1);
    return R;
}
};