#include "Earthworks.h"

namespace Earthworks
{
    // setter and getter functions

    double CEarthworks::getUChainage ( )
    {
        return UChainage;
    }

    void CEarthworks::setUChainage ( double inUChainage )
    {
        UChainage = inUChainage;
    }

    double CEarthworks::getLChainage ( )
    {
        return LChainage;
    }

    void CEarthworks::setLChainage ( double inLChainage )
    {
        LChainage = inLChainage;
    }

    int CEarthworks::getZone ( )
    {
        return Zone;
    }

    void CEarthworks::setZone ( int inZone )
    {
        Zone = inZone;
    }

    int CEarthworks::getSector ( )
    {
        return Sector;
    }

    void CEarthworks::setSector ( int inSector )
    {
        Sector = inSector;
    }

    int CEarthworks::getWBSCode ( )
    {
        return WBSCode;
    }

    void CEarthworks::setWBSCode ( int inWBSCode )
    {
        WBSCode = inWBSCode;
    }

    // Default constructor and destructors

    CEarthworks::CEarthworks ( )
        :UChainage ( -1.0 ) ,
        LChainage ( -1.0 ) ,
        Zone ( -1 ) ,
        Sector ( -1 ) ,
        WBSCode ( -1 )
    {
    }

    CEarthworks::~CEarthworks ( )
    {
    }

}