//
//  admin.hpp
//  refSystem
//
//  Created by Subham Mallick on 23/06/20.
//  Copyright © 2020 Subham Mallick. All rights reserved.
//

#ifndef admin_hpp
#define admin_hpp

#include "jobList.hpp"
#include "referralStorage.hpp"
#include "utility.hpp"

class Admin:public Account{
    ReferralStorage *referralStorage = ReferralStorage::getInstance();
    
public:
    Admin(std::string email):Account(email){}
    
    void createJob(int min_experience,int max_experience,std::string mandatory_skill){
        Job newJob(min_experience,max_experience,mandatory_skill);
        referralStorage->addJob(newJob);
    }
    
    std::vector<Job> getAllJobs(){
        return referralStorage->getAllJobs();
    }
    
    void banCandidateById(std::string candidateId){
        std::vector<Candidate> candidates = referralStorage->getAllCandidates();
        for(auto &candidate_value : candidates){
            if(candidate_value.getAccountId()==candidateId){
                candidate_value.setIsBan(true);
                referralStorage->setCandidates(candidates);
                break;
            }
        }
    }
    
    void changeCandidateState(std::string candidateId,CandidateStatus candidateStatus){
        std::vector<Candidate> candidates = referralStorage->getAllCandidates();
        for(auto &candidate_value : candidates){
            if(candidate_value.getAccountId()==candidateId){
                candidate_value.setCandidateStatus(candidateStatus);
                referralStorage->setCandidates(candidates);
                break;
            }
        }
    }
    
    
    
};

#endif /* admin_hpp */
