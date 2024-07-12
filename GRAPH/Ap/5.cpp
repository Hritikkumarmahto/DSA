#include <iostream>
using namespace std;
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            int ch = s[0];
            s.erase(s.begin());
            s.push_back(ch);
            if (goal == s)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution solution;
    string s = "hritikkumar";
    string goal = "cdeab";
    bool result = solution.rotateString(s, goal);
    cout << "Result: " << (result ? "true" : "false") <<endl;
    return 0;
}
#include <iostream>
using namespace std;
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            int ch = s[0];
            s.erase(s.begin());
            s.push_back(ch);
            if (goal == s)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution solution;
    string s = "hritikkumar";
    string goal = "cdeab";
    bool result = solution.rotateString(s, goal);
    cout << "Result: " << (result ? "true" : "false") <<endl;
    return 0;
}
#include <iostream>
using namespace std;
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            int ch = s[0];
            s.erase(s.begin());
            s.push_back(ch);
            if (goal == s)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution solution;
    string s = "hritikkumar";
    string goal = "cdeab";
    bool result = solution.rotateString(s, goal);
    cout << "Result: " << (result ? "true" : "false") <<endl;
    return 0;
}
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            int ch = s[0];
            s.erase(s.begin());
            s.push_back(ch);
            if (goal == s)
            {
                return true;
            }
        }
        return false;
    }
    int main()
    {
        Solution solution;
        string s = "abcde";
        string goal = "cdeab";
        bool result = solution.rotateString(s, goal);
        cout << "Result: " << (result ? "true" : "false") << endl;
        return 0;
    }
}