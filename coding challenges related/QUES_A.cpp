#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <sstream>

using namespace std;

// Gate operation functions
int AND(int x, int y) { return x & y; }
int OR(int x, int y) { return x | y; }
int NAND(int x, int y) { return !(x & y); }
int NOR(int x, int y) { return !(x | y); }
int XOR(int x, int y) { return x ^ y; }

// Map to store the gate operations
unordered_map<string, int (*)(int, int)> gateoperations = {
    {"AND", AND},
    {"OR", OR},
    {"NAND", NAND},
    {"NOR", NOR},
    {"XOR", XOR}};

// Function to read input
void Input(int &numgates, vector<string> &gatedesc, int &num_cycles,
           unordered_map<string, vector<int>> &inputs, string &target)
{
    cin >> numgates;
    cin.ignore();

    gatedesc.resize(numgates);
    for (int i = 0; i < numgates; ++i)
    {
        getline(cin, gatedesc[i]);
    }

    cin >> num_cycles;
    cin.ignore();

    // Read input values for each variable (A, B, C, etc.)
    for (int i = 0; i < num_cycles; ++i)
    {
        string line;
        getline(cin, line);
        istringstream iss(line);
        string var;
        iss >> var;

        vector<int> values(num_cycles);
        for (int j = 0; j < num_cycles; ++j)
        {
            iss >> values[j];
        }
        inputs[var] = values;
    }

    getline(cin, target);
}

// Function to simulate circuit
vector<int> simulateCircuit(int numgates, const vector<string> &gatedesc,
                            int num_cycles, unordered_map<string, vector<int>> &inputs,
                            const string &target)
{
    unordered_map<string, vector<int>> outputs;

    for (const auto &gateDesc : gatedesc)
    {
        size_t eqPos = gateDesc.find('=');
        string gateName = gateDesc.substr(0, eqPos);
        outputs[gateName] = vector<int>(num_cycles, 0); 
    }

    // Start computing outputs from cycle 1 onward
    for (int cycle = 1; cycle < num_cycles; ++cycle)
    {
        for (const auto &gateDesc : gatedesc)
        {
            size_t eqPos = gateDesc.find('=');
            size_t parenPos = gateDesc.find('(');

            string gateName = gateDesc.substr(0, eqPos);
            string operation = gateDesc.substr(eqPos + 1, parenPos - eqPos - 1);

            size_t commaPos = gateDesc.find(',', parenPos);
            string input1 = gateDesc.substr(parenPos + 1, commaPos - parenPos - 1);
            string input2 = gateDesc.substr(commaPos + 1, gateDesc.length() - commaPos - 2);

            // Fetch values of inputs, if gate exists, get value from previous cycle
            int val1 = (outputs.count(input1) > 0) ? outputs[input1][cycle-1] : inputs[input1][cycle-1];
            int val2 = (outputs.count(input2) > 0) ? outputs[input2][cycle-1] : inputs[input2][cycle-1];

            outputs[gateName][cycle] = gateoperations[operation](val1, val2);
        }
    }

    return outputs[target];
}

int main()
{
    int numgates, num_cycles;
    vector<string> gatedesc;
    unordered_map<string, vector<int>> inputs;
    string target;

    Input(numgates, gatedesc, num_cycles, inputs, target);

    vector<int> result = simulateCircuit(numgates, gatedesc, num_cycles, inputs, target);

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
