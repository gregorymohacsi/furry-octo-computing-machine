#pragma once

namespace Earthworks

{

    class CEarthworks

    {

    public:

        // getter and setter function declarations

        void getUChainage ( );
        void setUChainage ( );
        
        void getLChainage ( );
        void setLChainage ( );

        void getZone ( );
        void setZone ( );

        void getWBSCode ( );
        void setWBSCode ( );

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
