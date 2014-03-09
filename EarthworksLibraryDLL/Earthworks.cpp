#include "Earthworks.h"

namespace Earthworks
{
    // setter and getter functions

    void getUChainage ( )
    {
        return UChainage;
    }

    void set_UChainage ( double inUChainage)
    {
        UChainage = inUChainage;
    }

    void getLChainage ( )
    {
        return LChainage;
    }

    void setLChainage ( double inLChainage )
    {
        LChainage = inLChainage;
    }

    void getZone ( )
    {
        return Zone;
    }

    void setZone ( int inZone )
    {
        Zone = inZone;
    }

    void getSector ( )
    {
        return Sector;
    }

    void setSector ( int inSector )
    {
        Sector = inSector;
    }

    void getWBSCode ( )
    {
        return WBSCode;
    }

    void setWBSCode ( int inWBSCode )
    {
        WBSCode = inWBSCode;
    }

    // Default constructor and destructors

    CEarthworks::CEarthworks ( )
        :
        UChainage ( -1 ) ,
        LChainage ( -1 ) ,
        Zone ( -1 ) ,
        WBSCode ( -1 ) ,
    {
    }

    CEarthworks::~CEarthworks ( )
    {
    }

}