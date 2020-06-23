//
//  jobList.hpp
//  refSystem
//
//  Created by Subham Mallick on 23/06/20.
//  Copyright © 2020 Subham Mallick. All rights reserved.
//

#ifndef jobList_hpp
#define jobList_hpp

#include "utility.hpp"

class Job{
private:
    std::string job_id;
    int min_experience;
    int max_experience;
    std::string mandatory_skill;
public:
    
    Job(int min_experience_,int max_experience_,std::string mandatory_skill_){
        job_id = generateID();
        min_experience = min_experience_;
        max_experience = max_experience_;
        mandatory_skill = mandatory_skill_;
    }
    
    std::string getJobId() const{
        return job_id;
    }
    
    int getMinExperience() const{
        return min_experience;
    }
    
    int getMaxExperience() const{
        return max_experience;
    }
    
    std::string getMandatorySkill() const{
        return mandatory_skill;
    }
    
    void setMinExperience(int min_experience_){
        min_experience = min_experience_;
    }
    
    void setMaxExperience(int max_experience_){
        max_experience = max_experience_;
    }
    
    void setMandatorySkill(std::string mandatory_skill_){
        mandatory_skill = mandatory_skill_;
    }
    
};

#endif /* jobList_hpp */
