//

#ifndef __BALANCELINE_H__
#define __BALANCELINE_H__

#include <string>
#include "Earthworks.h"

namespace Earthworks
{

    class CBalanceLine : CEarthworks
    {

    public:
        CBalanceLine ( );
        virtual ~CBalanceLine ( );

    protected:

        std::string CutChainage;
        std::string FillChainage;
        bool 
        double Cut;
        double Sand;
        double Import;
        double Fill;
        double Export;
        double Total;
        double CrossHaul;
        double Balance;
        double NoHaul;
        double Range;
        double AverageDistance;

    };

}

#endif