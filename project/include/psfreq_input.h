/*
 * pstate-frequency Easier control of the Intel p-state driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * For questions please contact pyamsoft at pyam.soft@gmail.com
 */

#ifndef C_PSFREQ_INPUT_H_
#define C_PSFREQ_INPUT_H_

#include "include/psfreq_cpu.h"
#include "include/psfreq_values.h"

namespace psfreq {

const int PARSE_EXIT_GOOD = -1;
const int PARSE_EXIT_BAD = 1;
const int PARSE_EXIT_BAD_HANDLED = 2;
const int PARSE_EXIT_NORMAL = 0;
const int UID_ROOT = 0;

int parseOptions(const int argc, char **const argv,
 		const psfreq::Cpu &cpu, psfreq::Values &cpuValues,
 		const char *const shortOptions,
 		const struct option longOptions[]);

}

#endif

