/**
 * @file port.h
 *
 * @author awewsomegamer <awewsomegamer@gmail.com>
 *
 * @LICENSE
 * Arctan-MB2BSP - Multiboot2 Bootstrapper for Arctan Kernel
 * Copyright (C) 2023-2024 awewsomegamer
 *
 * This file is part of Arctan-MB2BSP
 *
 * Arctan is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @DESCRIPTION
 * C headers for assembly I/O functions.
*/
#ifndef ARC_ARCH_X86_IO_PORT_H
#define ARC_ARCH_X86_IO_PORT_H

#include <stdint.h>

/**
 * Extern assembly function to write to IO port.
 *
 * @param uint16_t port - The port to write to.
 * @param uint8_t value - The value to write.
 * */
extern void outb(uint16_t port, uint8_t value);

#endif
