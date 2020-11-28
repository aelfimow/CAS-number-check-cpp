#include "cas_number.h"


cas_number::cas_number(std::string const &str) :
    m_cas_number_str { str },
    m_formula { },
    m_synonym { }
{
}

cas_number::~cas_number()
{
}

cas_number &cas_number::formula(std::string const &str)
{
    m_formula = str;
    return *this;
}

cas_number &cas_number::synonym(std::string const &str)
{
    m_synonym = str;
    return *this;
}

void cas_number::check()
{
}
