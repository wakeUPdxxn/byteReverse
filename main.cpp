#include <cstddef>
#include <cstdint>
#include <vector>
#include <cmath>

std::uint8_t bynaryToDecimal(const std::vector<std::uint8_t>& bytes) {
    std::uint8_t decNum{ 0 };
    for (size_t i = bytes.size() - 1, j{ 0 }; i > 0; --i, ++j)
    {
        decNum += pow(2, i) * bytes[j];
    }
    return decNum + 1;
}

std::byte byteReverse(std::byte b)
{
    std::uint8_t byte = std::to_integer<uint8_t>(b);
    std::vector <uint8_t> bits;
    while (byte) {
        bits.push_back(byte % 2);
        byte /= 2;
    }
    return std::byte(bynaryToDecimal(bits));
}


