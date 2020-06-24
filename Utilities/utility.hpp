//
//  utility.hpp
//  refSystem
//
//  Created by Subham Mallick on 23/06/20.
//  Copyright © 2020 Subham Mallick. All rights reserved.
//

#ifndef utility_hpp
#define utility_hpp

#include <iostream>

std::string generateID();

bool preScreenFilter();

enum CandidateStatus{
    IDLE,
    REFERRED,
    IN_PROCESS,
    REJECT,
    OFFERED,
    JOINED
}candidateStatus;



#endif /* utility_hpp */
