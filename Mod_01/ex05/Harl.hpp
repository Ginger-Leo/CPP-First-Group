#include <iostream>
#include <string>

class Harl
{
    private:
        void complain( std::string level );
    public:
        Harl();
        ~Harl();
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};
