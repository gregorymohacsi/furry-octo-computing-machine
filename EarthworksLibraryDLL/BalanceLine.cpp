
#include "BalanceLine.h"

namespace Earthworks
{

    CBalanceLine::CBalanceLine ( ) : CEarthworks ()
        CutChainage ( "No Data" ) ,
        FillChainage ( "No Data" ) ,
        MovementDirection ( )
        Cut ( -100 ) ,
        Sand ( -100 ) ,
        Import ( -100 ) ,
        Fill ( -100 ) ,
        Export ( -100 ) ,
        Total ( -100 ) ,
        CrossHaul ( -100 ) ,
        Balance ( -100 ) ,
        NoHaul ( -100 ) ,
        Range ( -100 ) ,
        AverageDistance ( -100 )
    {
    }


    CBalanceLine::~CBalanceLine ( )
    {
    }

}
