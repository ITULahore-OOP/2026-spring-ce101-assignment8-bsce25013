#include "TutoringSession.h"

// Non-member operator> definition 
bool operator>(const TutoringSession& s1, const TutoringSession& s2) {
    return s1.getDuration() > s2.getDuration();
}