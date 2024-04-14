/**
 * @file arith64.h
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
 * Header for arith64.c.
*/
#ifndef ARITH_64_H
#define ARITH_64_H

#include <stdint.h>

int64_t __absvdi2(int64_t a);
int64_t __ashldi3(int64_t a, int b);
int64_t __ashrdi3(int64_t a, int b);
int __clzdi2(uint64_t a);
int __clzsi2(uint32_t a);
int __ctzdi2(uint64_t a);
int __ctzsi2(uint32_t a);
int64_t __divdi3(int64_t a, int64_t b);
int __ffsdi2(uint64_t a);
uint64_t __lshrdi3(uint64_t a, int b);
int64_t __moddi3(int64_t a, int64_t b);
int __popcountdi2(uint64_t);
int __popcountsi2(uint32_t a);
uint64_t __udivdi3(uint64_t a, uint64_t b);
uint64_t __umoddi3(uint64_t a, uint64_t b);

#endif
