#ifndef S390X_TARGET_SIGNAL_H
#define S390X_TARGET_SIGNAL_H

#include "../generic/signal.h"

#define TARGET_SA_RESTORER      0x04000000

#define TARGET_ARCH_HAS_SETUP_FRAME
#define TARGET_ARCH_HAS_SIGTRAMP_PAGE 1

#endif /* S390X_TARGET_SIGNAL_H */
