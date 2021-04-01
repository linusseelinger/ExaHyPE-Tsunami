#ifndef MUQ_EXTERN
#define MUQ_EXTERN

/**
 * This file is part of the ExaHyPE project.
 * Copyright (c) 2016  http://exahype.eu
 * All rights reserved.
 *
 * The project has received funding from the European Union's Horizon 
 * 2020 research and innovation programme under grant agreement
 * No 671698. For copyrights and licensing, please consult the webpage.
 *
 * Released under the BSD 3 Open Source License.
 * For the full license text, see LICENSE.txt
 **/
#include <vector>
#include "InitialData.h"

namespace muq{

    extern std::vector<double> param;
    extern std::vector<double> solution;
    extern InitialData* initialData;
    extern InitialData* initialDataFV;
    extern double grav, epsilon_DG, epsilon;
    extern int level;

void set_globals(){
    double grav = 9.81;
    double epsilonDG = 1e-2;
    double epsilon = 1e-2;

    //TODO read level and parameters
    int level = 0;
    if(level == 0){
        InitialData* initialData = new InitialData(15,"data_gmt.yaml");
        InitialData* initialDataFV = new InitialData(15,"data_gmt.yaml");
    }
    else{
        InitialData* initialData = new InitialData(14,"data_gmt.yaml");
        InitialData* initialDataFV = new InitialData(14,"data_gmt.yaml");
    }

}

}

#endif
