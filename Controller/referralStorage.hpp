//
//  referralStorage.hpp
//  refSystem
//
//  Created by Subham Mallick on 23/06/20.
//  Copyright © 2020 Subham Mallick. All rights reserved.
//

#ifndef referralStorage_hpp
#define referralStorage_hpp

#include <iostream>
#include <map>
#include <vector>
#include <string.h>

#include "candidate.hpp"
#include "jobList.hpp"

class ReferralStorage
{
private:
    std::vector<Job> jobs;
    std::vector<Candidate> candidates;
    
    std::map<Job,std::vector<Candidate>> jobMap;
    std::map<Candidate,std::vector<Job>> candidateMap;
    
    
    static ReferralStorage *referralStorage;
    ReferralStorage(){}
    
public:
    
    static ReferralStorage *getInstance(){
        if(!referralStorage){
            referralStorage = new ReferralStorage;
        }
        return referralStorage;
    }
    
    
    void addJob(Job newJob){
        jobs.push_back(newJob);
    }
    
    void deleteJobUsingId(std::string jobId){
        //todo
    }
    
    void addCandidate(Candidate candidate){
        candidates.push_back(candidate);
    }
    
    void deleteCandidateUsingId(std::string candidateId){
        //todo
    }
    
    std::vector<Job> getAllJobs() const{
        return jobs;
    }
    
    std::vector<Candidate> getAllCandidates() const{
        return candidates;
    }
    
};

ReferralStorage* ReferralStorage::referralStorage = nullptr;

#endif /* referralStorage_hpp */
