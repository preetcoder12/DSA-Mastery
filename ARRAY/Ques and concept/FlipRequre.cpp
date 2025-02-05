#include <iostream>
#include <bitset>
using namespace std;

void Flip_Req(int start, int end)

{
    std::bitset<4> binary1(start);
    std::bitset<4> binary2(end);
    int count = 0;

    for (size_t i = 0; i < binary1.size(); i++)
    {
        if (binary1[i] == binary2[i])
        {
            i++;
        }
        if (binary1[i] > binary2[i])
        {
            binary2[i] = 1;
            count++;
        }
        if (binary1[i] < binary2[i])
        {
            binary2[i] = 0;
            count++;
        }
    }
    cout << binary2 << endl;
    cout << count << endl;
}

int main()
{
    int start;
    int end;

    cout << "Enter the start value :  " << endl;
    cin >> start;
    cout << "Enter the end value  :  " << endl;
    cin >> end;

    std::bitset<4> binary1(start);
    std::bitset<4> binary2(end);
    std::cout << binary1 << std::endl;
    std::cout << binary2 << std::endl;

    Flip_Req(start, end);
    return 0;
}