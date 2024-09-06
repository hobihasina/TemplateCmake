#include <string>

class Soundex
{
    public:
        std::string encode(const std::string& word) const;
        std::string encodeDigit(char letter) const;

    private:
        std::string head(const std::string& word) const;
        std::string encodedDigits(const std::string& word) const;
        std::string zeroPad(const std::string& word) const;
        std::string tail(const std::string& word) const;
        bool isComplete(const std::string& word) const;
        std::string lastDigit(const std::string& word) const;

    private:
        static const size_t MaxCodeLength{4};
};