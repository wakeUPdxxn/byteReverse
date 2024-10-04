#include <bit>
#include <vector>
#include <bitset>

using namespace std;

int bynaryToDecimal(const vector<int>& bytes) {
    int decNum{ 0 };
    for (size_t i = bytes.size() - 1, j{ 0 }; i > 0; --i, ++j)
    {
        decNum += pow(2, i) * bytes[j];
    }
    return decNum + 1;
}

std::byte byteReverse(byte b)
{
    std::uint16_t byte = to_integer<uint16_t>(b);
    vector <int> bytes;
    while (byte) {
        bytes.push_back(byte % 2);
        byte /= 2;
    }
    return std::byte(bynaryToDecimal(bytes));
}


