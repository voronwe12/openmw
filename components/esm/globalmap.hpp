#ifndef OPENMW_COMPONENTS_ESM_GLOBALMAP_H
#define OPENMW_COMPONENTS_ESM_GLOBALMAP_H

#include <vector>

namespace ESM
{
    class ESMReader;
    class ESMWriter;

    // format 0, saved games only

    ///< \brief An image containing the explored areas on the global map.
    struct GlobalMap
    {
        static unsigned int sRecordId;

        // The minimum and maximum cell coordinates
        struct Bounds
        {
            int mMinX, mMaxX, mMinY, mMaxY;
        };

        Bounds mBounds;

        std::vector<char> mImageData;

        void load (ESMReader &esm);
        void save (ESMWriter &esm) const;
    };

}

#endif
