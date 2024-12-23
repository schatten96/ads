#include "numeric/biginteger.hpp"

#include <iostream>

namespace core {

BigInteger::BigInteger() : m_data(nullptr), m_capacity(0), m_size(0) {
    std::cout << "done";
}

BigInteger::~BigInteger() {
    delete[] m_data;
}

}  // namespace core
