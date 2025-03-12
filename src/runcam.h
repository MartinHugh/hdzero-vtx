#ifndef __RUNCAM_H_
#define __RUNCAM_H_
#include "stdint.h"

void runcam_type_detect(void);
void runcam_setting_profile_reset(uint8_t *setting_profile);
uint8_t runcam_setting_profile_check(uint8_t *setting_profile);
uint8_t runcam_set(uint8_t *setting_profile, uint8_t camera_id);
void runcam_reset_isp(void);
void runcam_save(void);
void runcam_shutter_fix(uint16_t sec);
#endif