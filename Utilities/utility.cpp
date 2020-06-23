//
//  utility.cpp
//  refSystem
//
//  Created by Subham Mallick on 23/06/20.
//  Copyright © 2020 Subham Mallick. All rights reserved.
//

#include "utility.hpp"
#include "jobList.hpp"
#include "candidate.hpp"

#include <random>

std::string generateID(){
    
    static const int length_id = 5;
    static const char alpha_num[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
    int length_alphanum = (sizeof(alpha_num)-1);
    std::string id;
    
    std::random_device rd;
    
    for(int i=0;i<length_id;i++){
        id = id + alpha_num[ rd() % length_alphanum ];
    }
    
    return id;
    
}

bool preScreenFilter(Job job, Candidate candidate){
    
    //Already applied for job
    
    
    return false;
}
