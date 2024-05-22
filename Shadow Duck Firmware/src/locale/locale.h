/* This software is licensed under the MIT License: https://github.com/spacehuhntech/usbnova */

#pragma once

#include "locale/locale_types.h"
#include "locale/usb_hid_keys.h"

namespace locale {
    hid_locale_t* get_default();
    hid_locale_t* get(const char* name);
}