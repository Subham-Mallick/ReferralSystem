//
//  main.cpp
//  refSystem
//
//  Created by Subham Mallick on 22/06/20.
//  Copyright © 2020 Subham Mallick. All rights reserved.
//

#include <iostream>
#include "utility.hpp"
#include "account.hpp"
#include "admin.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << generateID()<<std::endl;
    
    Admin newAdmin("a@a.com");
    
    newAdmin.createJob(1, 2, "java");
    newAdmin.createJob(1, 2, "java");
    
    for(auto &job:newAdmin.getAllJobs())
    {
        std::cout << job.getJobId()<<std::endl;
    }
    
    
    
    
    
}
