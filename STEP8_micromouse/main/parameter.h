// Copyright 2024 RT Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MAIN_PARAMETER_H_
#define MAIN_PARAMETER_H_

#include "mytypedef.h"

#define TIRE_DIAMETER (24.70)
#define TREAD_WIDTH (31.5)
#define PI (3.141592)
#define TREAD_CIRCUIT (TREAD_WIDTH * PI / 4)
#define PULSE (TIRE_DIAMETER * PI / (35.0 / 10.0 * 20.0 * 8.0))
#define MIN_HZ 40

//Change the value to match your environment
#define REF_SEN_R 516
#define REF_SEN_L 434

#define TH_SEN_R 300
#define TH_SEN_L 200
#define TH_SEN_FR 100
#define TH_SEN_FL 100

#define CONTH_SEN_R TH_SEN_R
#define CONTH_SEN_L TH_SEN_L

#define CON_WALL_KP 0.09
#define SEARCH_ACCEL 1.5
#define TURN_ACCEL 0.3

#define SEARCH_SPEED 200
#define MAX_SPEED 600
#define MIN_SPEED (MIN_HZ * PULSE)

#define GOAL_X 3
#define GOAL_Y 3

#define INC_FREQ 3000
#define DEC_FREQ 2000

#define BATT_MAX 4000
#define BATT_MIN 3800

#define HALF_SECTION 45
#define SECTION 90

#endif /* MAIN_PARAMETER_H_ */
