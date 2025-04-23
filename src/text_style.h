#ifndef TEXT_STYLE
#define TEXT_STYLE

#include <iostream>

using namespace std;

namespace style
{
    /**
     * This resets the style
     */
    ostream &reset(ostream &os)
    {
        os << "\033[0m";
        return os;
    }

    ostream &bold(ostream &os)
    {
        os << "\033[1m";
        return os;
    }

    ostream &faded(ostream &os)
    {
        os << "\033[2m";
    }

    ostream &italic(ostream &os)
    {
        os << "\033[3m";
        return os;
    }

    ostream &underline(ostream &os)
    {
        os << "\033[4m";
        return os;
    }

    ostream &blink(ostream &os)
    {
        os << "\033[5m";
        return os;
    }

    ostream &inv(ostream &os)
    {
        os << "\033[7m";
        return os;
    }

    ostream &hide(ostream &os)
    {
        os << "\033[8m";
        return os;
    }

    ostream &strike(ostream &os)
    {
        os << "\033[9m";
        return os;
    }

    namespace fg{
        ostream &black(ostream &os)
        {
            os << "\033[30m";
            return os;
        
        }

        ostream &red(ostream &os)
        {
            os << "\033[31m";
            return os;
        
        }

        ostream &green(ostream &os)
        {
            os << "\033[32m";
            return os;
        
        }

        ostream &yellow(ostream &os)
        {
            os << "\033[33m";
            return os;
        
        }

        ostream &blue(ostream &os)
        {
            os << "\033[34m";
            return os;
        
        }

        ostream &magenta(ostream &os)
        {
            os << "\033[35m";
            return os;
        
        }

        ostream &cyan(ostream &os)
        {
            os << "\033[36m";
            return os;
        
        }

        ostream &white(ostream &os)
        {
            os << "\033[37m";
            return os;
        }
    }

    namespace bg{
        ostream &black(ostream &os)
        {
            os << "\033[40m";
            return os;
        
        }

        ostream &red(ostream &os)
        {
            os << "\033[41m";
            return os;
        
        }

        ostream &green(ostream &os)
        {
            os << "\033[42m";
            return os;
        
        }

        ostream &yellow(ostream &os)
        {
            os << "\033[43m";
            return os;
        
        }

        ostream &blue(ostream &os)
        {
            os << "\033[44m";
            return os;
        
        }

        ostream &magenta(ostream &os)
        {
            os << "\033[45m";
            return os;
        
        }

        ostream &cyan(ostream &os)
        {
            os << "\033[46m";
            return os;
        
        }

        ostream &white(ostream &os)
        {
            os << "\033[47m";
            return os;
        }
    }
}
#endif