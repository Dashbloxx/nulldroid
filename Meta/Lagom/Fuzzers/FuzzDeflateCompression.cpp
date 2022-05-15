/*
 * Copyright (c) 2021, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibCompress/Deflate.h>
#include <stdio.h>

extern "C" int LLVMFuzzerTestOneInput(uint8_t const* data, size_t size)
{
    auto result = Compress::DeflateCompressor::compress_all(ReadonlyBytes { data, size });
    return result.has_value();
}
