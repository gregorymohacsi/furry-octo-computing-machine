#ifndef __EARTHWORKS_H__
#define __EARTHWORKS_H__

namespace Earthworks
{

    class CEarthworks

    {

    public:

        // getter and setter function declarations

        double getUChainage ( );
        void setUChainage ( double inUChainage );

        double getLChainage ( );
        void setLChainage ( double inLChainage );

        int getZone ( );
        void setZone ( int inZone );

        int getSector ( );
        void setSector ( int inSector );

        int getWBSCode ( );
        void setWBSCode ( int inWBSCode );

        // Constructor && Destructor

        CEarthworks ( );
        virtual ~CEarthworks ( );

    protected:

        // Data members

        double UChainage;
        double LChainage;
        int Zone;
        int Sector;
        int WBSCode;

    };

}

#endif