#include <iostream>
#include <vector>
using namespace std;
char find_greater(const vector<char> &s1, char target)
{
    int ans = '\0';
    for (char i : s1)
    {
        if (i > target)
        {
            if (ans == '\0' || i < ans)
            {
                ans = i;
            }
        }
    }
    return (ans=='\0')?s1[0]:ans;
    

}
int main()
{

    vector<char> s1 = {'c', 'f', 'j'};
    char target = 'd';
    char ans = find_greater(s1, target);
    cout << ans << endl;
}