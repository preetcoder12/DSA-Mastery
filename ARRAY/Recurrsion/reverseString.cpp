#include <iostream>
using namespace std;

string reverse(string name)
{
    if (name.length() == 0)
    {
        return "";
    }

    else
    {
        return reverse(name.substr(1)) + name[0];
    }
}

int main()
{
    string name = "preet";
    cout << reverse(name) << endl;
}

/*
First Call: reverse("preet")
Calls reverse("reet") and will append 'p' after it finishes.

Second Call: reverse("reet")
Calls reverse("eet") and will append 'r' after it finishes.

Third Call: reverse("eet")
Calls reverse("et") and will append 'e' after it finishes.

Fourth Call: reverse("et")
Calls reverse("t") and will append 'e' after it finishes.

Fifth Call: reverse("t")
Calls reverse("") and will append 't' after it finishes.

Base Case Reached: reverse("")
Returns "" since the string is empty.
*/