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
    
    void banCandidate(Candidate candidate){
        
    }
    
    
};

#endif /* admin_hpp */
