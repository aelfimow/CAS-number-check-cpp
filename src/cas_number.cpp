#include "cas_number.h"
#include <map>
#include <vector>


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
    std::map<char, size_t> const table
    {
        { '0', 0 },
        { '1', 1 },
        { '2', 2 },
        { '3', 3 },
        { '4', 4 },
        { '5', 5 },
        { '6', 6 },
        { '7', 7 },
        { '8', 8 },
        { '9', 9 }
    };

    auto c = m_cas_number_str.rbegin();

    if (c == m_cas_number_str.rend())
    {
        error("No checksum character");
    }

    auto it = table.find(*c);

    if (it == table.end())
    {
        error("Checksum character is not a number");
    }

    size_t const checksum = it->second;

    ++c;

    if (c == m_cas_number_str.rend())
    {
        error("Missing delimiter befor checksum character");
    }

    if (*c != '-')
    {
        error("Wrong delimiter befor checksum character");
    }

    ++c;
    std::vector<size_t> values;
    size_t delim_cnt = 0;

    while (c != m_cas_number_str.rend())
    {
        if ('-' == *c)
        {
            ++c;
            ++delim_cnt;
            continue;
        }

        auto it2 = table.find(*c);

        if (it2 == table.end())
        {
            error("Character is not a number");
        }

        values.push_back(it2->second);

        ++c;
    }

    if (delim_cnt == 0)
    {
        error("Missing delimiter");
    }

    if (delim_cnt >= 2)
    {
        error("Too many delimiters");
    }

    size_t k = 1;
    size_t sum = 0;

    for (auto value: values)
    {
        sum += (value * k);
        ++k;
    }

    if (k == 1)
    {
        error("Missing numbers");
    }

    size_t const r = (sum % 10);

    if (r != checksum)
    {
        error("Wrong checksum");
    }
}

void cas_number::error(std::string const &msg)
{
    std::string error_msg = m_synonym + " (" + m_formula + "): " + msg;

    throw std::invalid_argument(error_msg);
}
