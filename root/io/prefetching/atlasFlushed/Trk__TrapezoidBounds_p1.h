//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef Trk__TrapezoidBounds_p1_h
#define Trk__TrapezoidBounds_p1_h
namespace Trk {
class TrapezoidBounds_p1;
} // end of namespace.

#include "TNamed.h"

namespace Trk {
class TrapezoidBounds_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   float       m_minHalfX;    //
   float       m_maxHalfX;    //
   float       m_halfY;       //
   float       m_alpha;       //
   float       m_beta;        //

   TrapezoidBounds_p1();
   TrapezoidBounds_p1(const TrapezoidBounds_p1 & );
   virtual ~TrapezoidBounds_p1();

};
} // namespace
#endif
