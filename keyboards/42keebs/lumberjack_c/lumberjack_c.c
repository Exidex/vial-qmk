/* Copyright 2020 Paul James
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

#include "lumberjack_c.h"

void keyboard_pre_init_kb() {
// To enable indicator LEDs and disable encoder support, set "ENCODER_MAP_ENABLE = no" in rules.mk
#if !defined(ENCODER_MAP_ENABLE)
    setPinOutput(LED1);
    setPinOutput(LED2);
#endif

    keyboard_pre_init_user();
}
