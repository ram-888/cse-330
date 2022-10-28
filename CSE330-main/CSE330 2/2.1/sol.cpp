class Solution
{
	public:
	    vector<string>ans;
	    void solve(string s,string cur)
	    {
	        if(s.size()==0)
	        {
	            ans.push_back(cur);
	            return;
	        }
	        for(int i =0;i<s.size();i++)
	        {
	            if(i>0 && s[i]==s[i-1])continue;
	            string left = s.substr(0,i);
	            string right = s.substr(i+1);
	            solve(left+right,cur+s[i]);
	        }
	    }

		vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(),S.end());
		    solve(S,"");
		    return ans;
		}
};
