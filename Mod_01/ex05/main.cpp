#include "Harl.hpp"

int main(void)
{

    Harl harl;
    std::string level = "debug";
    harl.complain(level);

    level = "info";
    harl.complain(level);

    level = "warning";
    harl.complain(level);

    level = "error";
    harl.complain(level);

    level = "invalid";
    harl.complain(level);
    
    level = "";
    harl.complain(level);
    
    return 0;
}
