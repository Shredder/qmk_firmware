// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

// https://precondition.github.io/home-row-mods
// https://github.com/manna-harbour/qmk_firmware/blob/retro-shift/docs/tap_hold.md#retro-shift

// default but used in macros
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD

// Holding and releasing a Tap Hold key without pressing another key will result in only the hold.
// With Retro Shift enabled this action will also produce a shifted version of the tap keycode on release.
// #define RETRO_SHIFT 500

// Auto Shift
// https://docs.qmk.fm/#/feature_auto_shift
// #define AUTO_SHIFT_TIMEOUT TAPPING_TERM
// #define NO_AUTO_SHIFT_ALPHA
// #define AUTO_SHIFT_MODIFIERS
// #define AUTO_SHIFT_NO_SETUP

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    48

// Leader config
#define LEADER_TIMEOUT 250
#define LEADER_PER_KEY_TIMING
// For faster leader replacements
#define USB_POLLING_INTERVAL_MS 1

// Bilateral combinations
#define BILATERAL_COMBINATIONS
