/*
 * AD9361 SPI register dumper, for diffing the register state produced by this driver against
 * the Rust driver in the ROMEO firmware repo.
 */
#ifndef REG_DUMP_H_
#define REG_DUMP_H_

#include "ad9361_api.h"

/**
 * Dump all named AD9361 SPI registers via printf.
 *
 * One line per register in the machine-parseable format `REG <name> 0x<addr> 0x<value>`,
 * matching the format produced by the Rust driver's dump_ad9361_registers().
 */
void ad9361_dump_registers(struct ad9361_rf_phy *phy);

#endif // REG_DUMP_H_
