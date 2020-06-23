//
//  candidate.hpp
//  refSystem
//
//  Created by Subham Mallick on 23/06/20.
//  Copyright © 2020 Subham Mallick. All rights reserved.
//

#ifndef candidate_hpp
#define candidate_hpp
#include "account.hpp"


class Candidate:public Account{
    bool isBan;
public:
    Candidate(std::string email):Account(email){
        isBan = false;
    }
};

#endif /* candidate_hpp */
