/*
 * Copyright (c) 2020, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibGfx/PBMLoader.h>
#include <stddef.h>
#include <stdint.h>

extern "C" int LLVMFuzzerTestOneInput(uint8_t const* data, size_t size)
{
    Gfx::PBMImageDecoderPlugin decoder(data, size);
    (void)decoder.frame(0);
    return 0;
}
