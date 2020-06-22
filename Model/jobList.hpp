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
    
    Job(int min_experience,int max_experience,std::string mandatory_skill){
        this->job_id = generateID();
        this->min_experience = min_experience;
        this->max_experience = max_experience;
        this->mandatory_skill = mandatory_skill;
    }
    
    std::string getJobId(){
        return this->job_id;
    }
    
    int getMinExperience(){
        return this->min_experience;
    }
    
    int getMaxExperience(){
        return this->max_experience;
    }
    
    std::string getMandatorySkill(){
        return this->mandatory_skill;
    }
    
    void setMinExperience(int min_experience){
        this->min_experience = min_experience;
    }
    
    void setMaxExperience(int max_experience){
        this->max_experience = max_experience;
    }
    
    void setMandatorySkill(std::string mandatory_skill){
        this->mandatory_skill = mandatory_skill;
    }
    
};

#endif /* jobList_hpp */
