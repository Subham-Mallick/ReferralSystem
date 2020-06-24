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
#include "utility.hpp"

class Candidate:public Account{
    bool isBan;
    CandidateStatus candidateStatus;
public:
    Candidate(std::string email):Account(email){
        isBan = false;
        candidateStatus = IDLE;
    }
    
    bool getIsBan(){
        return isBan;
    }
    
    CandidateStatus getCandidateStatus(){
        return candidateStatus;
    }
    
    void setIsBan(bool isBan_){
        isBan = isBan_;
    }
    
    void setCandidateStatus(CandidateStatus candidateStatus_){
        candidateStatus = candidateStatus_;
    }
    
    
    
};

#endif /* candidate_hpp */
