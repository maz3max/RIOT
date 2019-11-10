#pragma once

#include "bme680.h"

int bme680_i2c_init(bme680_t* dev, const bme680_params_t* params);