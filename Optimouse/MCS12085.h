/*MCS12085.h
Additional sensor support for OptiMouse library added by Arsenio Dev
*/

#ifndef MCS12085_h
#define MCS12085_h

#include <inttypes.h>
#include "OptiMouse.h"

class MCS12085 : public OptiMouse
{
  private:
  public:
	MCS12085(uint8_t, uint8_t);
	signed char dx(void);
	signed char dy(void);
};

#endif
