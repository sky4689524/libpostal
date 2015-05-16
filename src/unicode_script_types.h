#ifndef UNICODE_SCRIPT_TYPES_H
#define UNICODE_SCRIPT_TYPES_H

#include <stdlib.h>

#define NUM_CHARS 65536
#define MAX_LANGS 122

typedef enum {
    SCRIPT_UNKNOWN = 0,
    SCRIPT_COMMON = 1,
    SCRIPT_LATIN = 2,
    SCRIPT_BOPOMOFO = 3,
    SCRIPT_INHERITED = 4,
    SCRIPT_GREEK = 5,
    SCRIPT_COPTIC = 6,
    SCRIPT_CYRILLIC = 7,
    SCRIPT_ARMENIAN = 8,
    SCRIPT_HEBREW = 9,
    SCRIPT_ARABIC = 10,
    SCRIPT_SYRIAC = 11,
    SCRIPT_THAANA = 12,
    SCRIPT_NKO = 13,
    SCRIPT_SAMARITAN = 14,
    SCRIPT_MANDAIC = 15,
    SCRIPT_DEVANAGARI = 16,
    SCRIPT_BENGALI = 17,
    SCRIPT_GURMUKHI = 18,
    SCRIPT_GUJARATI = 19,
    SCRIPT_ORIYA = 20,
    SCRIPT_TAMIL = 21,
    SCRIPT_TELUGU = 22,
    SCRIPT_KANNADA = 23,
    SCRIPT_MALAYALAM = 24,
    SCRIPT_SINHALA = 25,
    SCRIPT_THAI = 26,
    SCRIPT_LAO = 27,
    SCRIPT_TIBETAN = 28,
    SCRIPT_MYANMAR = 29,
    SCRIPT_GEORGIAN = 30,
    SCRIPT_HANGUL = 31,
    SCRIPT_ETHIOPIC = 32,
    SCRIPT_CHEROKEE = 33,
    SCRIPT_CANADIAN_ABORIGINAL = 34,
    SCRIPT_OGHAM = 35,
    SCRIPT_RUNIC = 36,
    SCRIPT_TAGALOG = 37,
    SCRIPT_HANUNOO = 38,
    SCRIPT_BUHID = 39,
    SCRIPT_TAGBANWA = 40,
    SCRIPT_KHMER = 41,
    SCRIPT_MONGOLIAN = 42,
    SCRIPT_LIMBU = 43,
    SCRIPT_TAI_LE = 44,
    SCRIPT_NEW_TAI_LUE = 45,
    SCRIPT_BUGINESE = 46,
    SCRIPT_TAI_THAM = 47,
    SCRIPT_BALINESE = 48,
    SCRIPT_SUNDANESE = 49,
    SCRIPT_BATAK = 50,
    SCRIPT_LEPCHA = 51,
    SCRIPT_OL_CHIKI = 52,
    SCRIPT_BRAILLE = 53,
    SCRIPT_GLAGOLITIC = 54,
    SCRIPT_TIFINAGH = 55,
    SCRIPT_HAN = 56,
    SCRIPT_HIRAGANA = 57,
    SCRIPT_KATAKANA = 58,
    SCRIPT_YI = 59,
    SCRIPT_LISU = 60,
    SCRIPT_VAI = 61,
    SCRIPT_BAMUM = 62,
    SCRIPT_SYLOTI_NAGRI = 63,
    SCRIPT_PHAGS_PA = 64,
    SCRIPT_SAURASHTRA = 65,
    SCRIPT_KAYAH_LI = 66,
    SCRIPT_REJANG = 67,
    SCRIPT_JAVANESE = 68,
    SCRIPT_CHAM = 69,
    SCRIPT_TAI_VIET = 70,
    SCRIPT_MEETEI_MAYEK = 71,
    NUM_SCRIPTS
} script_t;

#endif
