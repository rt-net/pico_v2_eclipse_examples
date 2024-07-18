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


#include "device.h"
#include "run.h"


extern "C" void app_main(void)
{
	g_device.all_init();

    while (true) {
    	while(g_device.switch_get()==0) {
    		delay(10);
    	    continue;
    	}
    	g_device.motor_enable();
    	delay(1000);
    	g_device.LED_set(0x01);
    	g_run.accelerate(45, 200);
    	g_device.LED_set(0x07);
    	g_run.one_step(90, 200);
    	g_device.LED_set(0x0f);
    	g_run.decelerate(45, 200);
    	g_device.LED_set(0);
    	delay(1000);
    	g_device.motor_disable();
    }
}
