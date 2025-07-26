/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* RGB Matrix Driver Configuration */
#define SNLED27351_I2C_ADDRESS_1 SNLED27351_I2C_ADDRESS_VDDIO
#define SNLED27351_I2C_ADDRESS_2 SNLED27351_I2C_ADDRESS_GND

/* Increase I2C speed to 1000 KHz */
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 3U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 15U
#define I2C1_TIMINGR_SCLL 51U

#define SNLED27351_PHASE_CHANNEL SNLED27351_SCAN_PHASE_9_CHANNEL
#define SNLED27351_CURRENT_TUNE { 0xFC, 0xFC, 0x70, 0xFC, 0xFC, 0x70, 0xFC, 0xFC, 0x70, 0xFC, 0xFC, 0x70 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define ENABLE_RGB_MATRIX_ALPHAS_MODS 1
#define ENABLE_RGB_MATRIX_DUAL_BEACON 1
#define ENABLE_RGB_MATRIX_FLOWER_BLOOMING 1
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL 1
#define ENABLE_RGB_MATRIX_STARLIGHT 1
#define ENABLE_RGB_MATRIX_RIVERFLOW 1

#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE 1
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE 1
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE 1
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE 1
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS 1
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS 1
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS 1
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS 1
#define ENABLE_RGB_MATRIX_SPLASH 1
#define ENABLE_RGB_MATRIX_MULTISPLASH 1
#define ENABLE_RGB_MATRIX_SOLID_SPLASH 1
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH 1
