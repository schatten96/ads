#ifndef ADS_BIGINTEGER_HPP
#define ADS_BIGINTEGER_HPP

namespace core {

class BigInteger {

    unsigned char* m_data;
    unsigned long long m_capacity;
    unsigned long long m_size;

public:

    BigInteger();
    ~BigInteger();
};

}  // namespace core

#endif  //ADS_BIGINTEGER_HPP
