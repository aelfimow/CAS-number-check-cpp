#ifdef CAS_NUMBER_H
#error Already included
#else
#define CAS_NUMBER_H

#include <string>

class cas_number
{
    public:
        explicit cas_number(std::string const &str);
        ~cas_number();

        cas_number &formula(std::string const &str);
        cas_number &synonym(std::string const &str);

        void check();

    private:
        std::string m_cas_number_str;
        std::string m_formula;
        std::string m_synonym;

        void error(std::string const &msg);

    public:
        cas_number() = delete;
};

#endif
