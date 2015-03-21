/*
 * Licensed under the MIT License (MIT)
 *
 * Copyright (c) 2014 AudioScience Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**
 * external_port_output_descriptor_response_imp.h
 *
 * Public EXTERNAL PORT OUTPUT descriptor response implementation class
 */

#pragma once

#include <stdint.h>
#include "build.h"
#include "external_port_output_descriptor_response.h"
#include "jdksavdecc_aem_descriptor.h"
#include "descriptor_response_base_imp.h"

namespace avdecc_lib
{
    class external_port_output_descriptor_response_imp : public external_port_output_descriptor_response, public virtual descriptor_response_base_imp
    {
    public:
        external_port_output_descriptor_response_imp(const uint8_t *frame, size_t frame_len, ssize_t pos);
        virtual ~external_port_output_descriptor_response_imp();

        uint8_t * STDCALL object_name();
        uint16_t STDCALL port_flags();
        uint16_t STDCALL clock_domain_index();
        uint16_t STDCALL number_of_controls();
        uint16_t STDCALL base_control();
        uint16_t STDCALL signal_type();
        uint16_t STDCALL signal_index();
        uint16_t STDCALL signal_output();
        uint32_t STDCALL block_latency();
        uint16_t STDCALL jack_index();
    };
}
