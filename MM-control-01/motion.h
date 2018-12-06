//! @file
//! @brief Selector idler and pulley control
//!
//! Medium level motion control. Drive errors should be handled in this layer.

#ifndef MOTION_H_
#define MOTION_H_

#include <stdint.h>

void motion_set_idler_selector(uint8_t idler_selector);
void motion_set_idler_selector(uint8_t idler, uint8_t selector);
void motion_engage_idler();
void motion_disengage_idler();
void motion_feed_to_bondtech();

#endif //MOTION_H_
