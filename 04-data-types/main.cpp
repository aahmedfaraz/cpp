#include <iostream>
#include <string>
#include <cstdint>
#include <limits>

using namespace std;

int main() {
    // =========================================
    // INTEGER TYPES
    // =========================================

    // Usually 16 or 32 bits; commonly 32 bits (4 bytes).
    // A typical 32-bit signed int stores:
    // -2,147,483,648 to 2,147,483,647.
    int myNum = 10;

    // Usually 16 bits (2 bytes).
    // Typical range: -32,768 to 32,767.
    short myShort = 100;

    // At least 32 bits; commonly 32 bits (4 bytes).
    // Minimum guaranteed range is at least:
    // -2,147,483,647 to 2,147,483,647.
    long myLong = 100000L;

    // At least 64 bits? No: C++ guarantees at least
    // 64, not universally. Correction: long long is
    // at least 64 bits (commonly 8 bytes).
    long long myLongLong = 9000000000LL;

    // Unsigned integer: cannot represent negative values.
    // Usually 32 bits (4 bytes).
    // Typical range: 0 to 4,294,967,295.
    unsigned int myUnsigned = 4000000000U;

    // Unsigned short: commonly 16 bits (2 bytes).
    // Typical range: 0 to 65,535.
    unsigned short myUnsignedShort = 50000;

    // =========================================
    // FIXED-WIDTH INTEGER TYPES
    // =========================================

    // Exactly 8 bits, if this type is provided.
    // Range: -128 to 127.
    int8_t myInt8 = 100;

    // Exactly 16 bits, if provided.
    // Range: -32,768 to 32,767.
    int16_t myInt16 = 30000;

    // Exactly 32 bits, if provided.
    // Range: -2,147,483,648 to 2,147,483,647.
    int32_t myInt32 = 2000000000;

    // Exactly 64 bits, if provided.
    // Range: approximately -9.22 quintillion
    // to +9.22 quintillion.
    int64_t myInt64 = 900000000000LL;

    // Unsigned fixed-width types:
    uint8_t myUInt8 = 255;          // 0 to 255
    uint16_t myUInt16 = 65535;      // 0 to 65,535
    uint32_t myUInt32 = 4000000000U;
    uint64_t myUInt64 = 18000000000ULL;

    // =========================================
    // FLOATING-POINT TYPES
    // =========================================

    // Usually 32 bits (4 bytes).
    // Stores fractional values; typically about
    // 6-7 significant decimal digits of precision.
    float myFloat = 3.14f;

    // Usually 64 bits (8 bytes).
    // Typically about 15-16 significant digits.
    double myDouble = 12.575757575;

    // At least as much precision as double.
    // Commonly 80-bit extended precision or 128 bits,
    // but it may be the same size as double.
    long double myLongDouble = 3.141592653589793L;

    // =========================================
    // CHARACTER AND BOOLEAN TYPES
    // =========================================

    // Exactly 1 byte in C++ (usually 8 bits).
    // On common systems, can represent 256 bit patterns.
    char myLetter = 'A';

    // Usually 1 byte (8 bits) in memory.
    // Represents true or false; sizeof(bool) is
    // usually 1 byte, not necessarily 1 bit.
    bool myBoolean = true;

    // Character types for Unicode code units.
    char16_t myChar16 = u'A';   // Usually 16 bits
    char32_t myChar32 = U'A';   // Usually 32 bits
    wchar_t myWideChar = L'A';  // Size varies by platform

    // =========================================
    // STRING TYPE
    // =========================================

    // std::string stores text of variable length.
    // The string object has its own memory overhead.
    // Its characters may use additional memory,
    // usually allocated dynamically when needed.
    string myText = "Ahmed";

    // =========================================
    // OUTPUT
    // =========================================

    cout << "int: " << myNum << '\n';
    cout << "short: " << myShort << '\n';
    cout << "long: " << myLong << '\n';
    cout << "long long: " << myLongLong << '\n';
    cout << "unsigned int: " << myUnsigned << '\n';

    // int: 10
    // short: 100
    // long: 100000
    // long long: 9000000000
    // unsigned int: 4000000000

    cout << "int8_t: " << static_cast<int>(myInt8) << '\n';
    cout << "int16_t: " << myInt16 << '\n';
    cout << "int32_t: " << myInt32 << '\n';
    cout << "int64_t: " << myInt64 << '\n';

    // int8_t: 100
    // int16_t: 30000
    // int32_t: 2000000000
    // int64_t: 900000000000    

    cout << "float: " << myFloat << '\n';
    cout << "double: " << myDouble << '\n';
    cout << "long double: " << myLongDouble << '\n';

    // float: 3.14
    // double: 12.5758
    // long double: 3.14159

    cout << "char: " << myLetter << '\n';
    cout << "bool: " << myBoolean << '\n';
    cout << "string: " << myText << '\n';

    // char: A
    // bool: 1
    // string: Ahmed

    // sizeof returns memory size in bytes.
    cout << "\n--- Memory sizes ---\n";
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "short: " << sizeof(short) << " bytes\n";
    cout << "long: " << sizeof(long) << " bytes\n";
    cout << "long long: " << sizeof(long long) << " bytes\n";
    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";
    cout << "char: " << sizeof(char) << " bytes\n";
    cout << "bool: " << sizeof(bool) << " bytes\n";
    cout << "string object: " << sizeof(string) << " bytes\n";

    // --- Memory sizes ---
    // int: 4 bytes
    // short: 2 bytes
    // long: 4 bytes
    // long long: 8 bytes
    // float: 4 bytes
    // double: 8 bytes
    // char: 1 bytes
    // bool: 1 bytes
    // string object: 32 bytes

    // Numeric limits from the compiler's implementation.
    cout << "\n--- Actual integer limits ---\n";
    cout << "int min: " << numeric_limits<int>::min() << '\n';
    cout << "int max: " << numeric_limits<int>::max() << '\n';
    cout << "unsigned int max: " << numeric_limits<unsigned int>::max() << '\n';

    // --- Actual integer limits ---
    // int min: -2147483648
    // int max: 2147483647
    // unsigned int max: 4294967295
}
