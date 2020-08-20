/*
 * Copyright(c) Liu Ziyi. Licensed under the MIT license.
 */

#include <stdint.h>

#define SLEEP_STD_DURATION (3) /*<< 3min */
#define SLEEP_COMP_ACC_LENGTH (3 * (SLEEP_STD_DURATION + 1))
#define SLEEP_RES_ACC_LENGTH (2 * SLEEP_STD_DURATION + 1)
#define SLEEP_HR_LENGTH (SLEEP_STD_DURATION + 1)
#define SLEEP_NONWEAR_LENGTH (SLEEP_STD_DURATION + 1)
#define SLEEP_STATUS_AVG_WINDOW_LEN (13)
#define SLEEP_COUNT_AVG_WINDOW_LENGTH (13)
#define SLEEP_CYCLE_GAP (120) /*<< Gap between sleep cycles. */
#define SLEEP_MIN_SLEEP_DURATION (60)
#define SLEEP_MAX_SEGMENTS (50) /*<< max number of sleep segments. */
#define SLEEP_MAX_RECORD_LENGTH (1440)
#define SLEEP_MAX_SLEEP_MARKER_LENGTH (100)
#define SLEEP_FEATS_LENGTH (5)

#define SLEEP_COUNTS_WINDOW_LENGTH (13)
#define SLEEP_POST_DEPTH_AVG_WINDOW_LENGTH (13)

#define SLEEP_D_AWAKE (1)
#define SLEEP_D_REM (4)
#define SLEEP_D_LIGHT (2)
#define SLEEP_D_DEEP (3)

typedef float float32_t;